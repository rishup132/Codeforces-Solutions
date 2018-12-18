#include <bits/stdc++.h>

#define int long long
#define mod 998244353

using namespace std;

int C[2010][2010];

int power(int x, int y, int p) 
{ 
    int res = 1;
    x = x % p;

    while (y > 0) 
    { 
        if (y & 1) 
            res = (res*x) % p; 

        y = y>>1;
        x = (x*x) % p;   
    } 
    return res; 
}

int solve(int n, int k) 
{ 
    for (int i = 0; i <= n; i++) 
    { 
        for (int j = 0; j <= min(i, k); j++) 
        {
            if (j == 0 || j == i) 
                C[i][j] = 1; 
            else
                C[i][j] = (C[i-1][j-1]%mod + C[i-1][j]%mod)%mod;
        } 
    } 
  
    return C[n][k];
} 

int32_t main()
{
    int n,m,k;
    cin >> n >> m >> k;

    cout << ((m%mod * power(m-1,k,mod)%mod)%mod * solve(n-1,k)%mod)%mod << endl;
}