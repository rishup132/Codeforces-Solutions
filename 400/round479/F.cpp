#include <bits/stdc++.h>

using namespace std;

set <pair<int,int> > s;
int a[200010];

int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
    {
        cin >> a[i];
        
        s.insert({a[i],i});
    }

    map <int,int> m;

    for(int i=1;i<=n;i++)
    {
        if(m.find(a[i] - 1) != m.end())
            m[a[i]] = max(m[a[i]],m[a[i]-1]+1);
        else
            m[a[i]] = 1;
    }

    int ans = 0;
    int idx = 0;

    for(auto i:m)
    {
        if(i.second > ans)
        {
            ans = i.second;
            idx = i.first - ans + 1;
        }
    }

    cout << ans << endl;

    for(int i=1;i<=n;i++)
    {
        if(a[i] == idx)
            cout << i << " ", ans--, idx++;

        if(ans == 0)
            break;
    }
}