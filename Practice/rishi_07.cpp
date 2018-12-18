
#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[200010];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--)
    {
        int n,m;
        cin >> n >> m;

        for(int i=0;i<n+m;i++)
            a[i] = 0;

        vector <pair<int,int> > v;

        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                char x;
                cin >> x;

                if(x == '1')
                    v.push_back({i,j});
            }
        }

        for(int i=0;i<v.size();i++)
        {
            for(int j=i+1;j<v.size();j++)
                a[abs(v[i].first-v[j].first)+abs(v[i].second-v[j].second)]++;
        }

        for(int i=1;i<=n+m-2;i++)
            cout << a[i] << " ";
        cout << "\n";
    }

    return 0;
}