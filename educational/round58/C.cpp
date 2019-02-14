#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int ans[200010];

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        int n;
        cin >> n;

        vector <pair<int,pair<int,int> > > v;

        for(int i=0;i<n;i++)
        {
            int x,y;
            cin >> x >> y;

            v.push_back({x,{y,i}});
        }

        sort(v.begin(),v.end());

        int cnt = v[0].second.first;
        int flag = -1;

        for(int i=0;i<v.size();i++)
        {
            if(v[i].first <= cnt)
                cnt = max(cnt,v[i].second.first);
            else
            {
                flag = i;
                break;
            }
        }

        if(flag == -1)
            cout << -1 << endl;
        else
        {
            for(int i=0;i<flag;i++)
                ans[v[i].second.second] = 1;
            
            for(int i=flag;i<n;i++)
                ans[v[i].second.second] = 2;

            for(int i=0;i<n;i++)
                cout << ans[i] << " ";
            cout << endl;
        }
    }
}