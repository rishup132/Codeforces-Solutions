#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[300010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    set <pair<int,pair<int,int> > > v;

    for(int i=1;i<n;i++)
    {
        int x,y,z;
        cin >> x >> y >> z;

        v.insert({z,{x,y}});
    }

    while(true)
    {
        bool flag = true;

        set <pair<int,pair<int,int> > > s1;

        for(auto i:v)
        {
            int t1,t2;
            t1 = a[i.second.first];
            t2 = a[i.second.second];

            if(t1 + t2 - i.first >= max(t1,t2))
            {
                a[i.second.first] = a[i.second.second] = t1 + t2 - i.first;
                flag = false;
            }
            else
                s1.insert(i);
        }

        v = s1;

        if(flag)
            break;
    }

    int ans = 0;

    for(int i=1;i<=n;i++)
    {
        if(a[i] > ans)
            ans = a[i];
    }

    cout << ans << endl;
}