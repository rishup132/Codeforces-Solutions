#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int mod = 1e9+7;

int a[200010],b[200010];

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

int32_t main()
{
    int n,q;
    cin >> n >> q;

    string s;
    cin >> s;

    for(int i=0;i<n;i++)
    {
        if(s[i] == '1')
            a[i+1] = 1;
        else
            b[i+1] = 1;
    }

    for(int i=1;i<=n;i++)
        a[i] += a[i-1], b[i] += b[i-1];

    while(q--)
    {
        int l,r;
        cin >> l >> r;

        int t1,t2;
        t1 = a[r] - a[l-1];
        t2 = b[r] - b[l-1];

        int ans1,ans2;

        ans1 = power(2,t1+t2,mod);
        ans2 = power(2,t2,mod);

        cout << (ans1 - ans2 + mod)%mod << endl;
    }

    return 0;
}