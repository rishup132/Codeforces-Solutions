#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int v[2010][2];
int a[2010],b[2010],c[2010];
vector <int> v1[2010];
bool vis[2010];
int cnt = 0;

void dfs(int n)
{
    vis[n] = true;
    c[n] = cnt;

    for(int i:v1[n])
    {
        if(!vis[i])
            dfs(i);
    }
}

void pre(int n)
{
    a[cnt++] = n;

    if(v[n][0] != 0)
        pre(v[n][0]);

    if(v[n][1] != 0)
        pre(v[n][1]);
}

void post(int n)
{
    if(v[n][0] != 0)
        post(v[n][0]);

    if(v[n][1] != 0)
        post(v[n][1]);

    b[cnt++] = n;
}

int32_t main()
{
    int t;
    cin >> t;

    for(int p=1;p<=t;p++)
    {
        for(int i=0;i<2010;i++)
            v1[i].clear(), vis[i] = false;

        int n,k;
        cin >> n >> k;

        for(int i=1;i<=n;i++)
            cin >> v[i][0] >> v[i][1];

        cnt = 0;
        pre(1);

        cnt = 0;
        post(1);

        for(int i=0;i<n;i++)
        {
            v1[a[i]].push_back(b[i]);
            v1[b[i]].push_back(a[i]);
        }

        int count = 0;

        for(int i=1;i<=n;i++)
        {
            if(!vis[i])
            {
                if(cnt > k)
                    cnt = 1;

                dfs(i);
                count++;
                cnt++;
            }
        }

        cout << "Case #" << p << ": ";
        
        if(count < k)
            cout << "Impossible" << endl;
        else
        {
            for(int j=1;j<=n;j++)
                cout << c[j] << " ";
            cout << endl;
        }
    }
}