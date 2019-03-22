#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[5010],b[5010],ans[5010];
multiset <int> s[5010];

int32_t main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<n;i++)
    {
        cin >> b[i];

        s[b[i]].insert(a[i]);
    }

    for(int i=1;i<=m;i++)
    {
        if(!s[i].empty())
            ans[*s[i].rbegin()]++;
    }

    multiset <int> s1;

    for(int i=0;i<=5001;i++)
    {
        if(ans[i] == 0)
            s1.insert(i);
    }

    for(int i=0;i<10;i++)
        cout << ans[i] << "  ";
    cout << endl;

    int count = 0;
    for(int i:s1)
    {
        cout << i << " ";
        count++;

        if(count == 10)
            break;
    }
    cout << endl;

    int d;
    cin >> d;

    while(d--)
    {
        int x;
        cin >> x;

        ans[a[x-1]]--;
        s[b[x-1]].erase(s[b[x-1]].find(a[x-1]));

        if(ans[a[x-1]] == 0)
            s1.insert(a[x-1]);

        if(!s[b[x-1]].empty())
        {
            ans[*s[b[x-1]].rbegin()]++;

            if(ans[*s[b[x-1]].rbegin()] == 1)
                s1.erase(s1.find(*s[b[x-1]].rbegin()));
        }

        cout << *s1.begin() << endl;

        for(int i=0;i<10;i++)
            cout << ans[i] << "  ";
        cout << endl;

        count = 0;
        for(int i:s1)
        {
            cout << i << " ";
            count++;

            if(count == 10)
                break;
        }
        cout << endl;
    }
}