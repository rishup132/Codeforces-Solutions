#include <bits/stdc++.h>

#define int long long
using namespace std;

vector <int> v[100010];
int v1[100010];

int32_t main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        v[x].push_back(y);
    }

    for(int i=0;i<100010;i++)
    {
        if(v[i].size() > 0)
        {
            sort(v[i].begin(),v[i].end(),greater <int> ());

            int cnt = 0;
            
            for(int j=0;j<v[i].size();j++)
            {
                cnt += v[i][j];

                if(cnt <= 0)
                    break;
                
                v1[j] += cnt;
            }
        }
    }

    int ans = 0;

    for(int i=0;i<100010;i++)
        ans = max(ans,v1[i]);

    cout << ans << endl;
}