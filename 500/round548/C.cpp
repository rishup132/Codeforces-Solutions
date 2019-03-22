#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int power(int x, int y, int p) 
{ 
    int res = 1;      
    x = x % p;

    while (y > 0) 
    { 
        if(y & 1)
            res = (res*x) % p;

        y = y >> 1;
        x = (x*x) % p;
    } 

    return res; 
} 

vector <int> v[200010];
bool vis[200010];

int dfs(int n)
{
    vis[n] = true;
    int cnt = 1;

    for(int i:v[n])
    {
        if(!vis[i])
            cnt += dfs(i);
    }

    return cnt;
}

int32_t main()
{
    int n,k;
    cin >> n >> k;

    for(int i=1;i<n;i++)
    {
        int x,y,z;
        cin >> x >> y >> z;

        if(z == 0)
        {
            v[x].push_back(y);
            v[y].push_back(x);
        }
    }

    int ans = power(n,k,mod);
   
    for(int i=1;i<=n;i++)
    {
        if(!vis[i])
            ans = (ans%mod - power(dfs(i),k,mod)%mod + mod)%mod;
    }

    cout << ans << endl;
}