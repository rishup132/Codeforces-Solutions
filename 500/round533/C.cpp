#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define mod 1000000007

using namespace std;

int a[200010][3];

int32_t main()
{
    int n,l,r;
    cin >> n >> l >> r;

    int c1,c2,c3;
    c1 = c2 = c3 = r/3;
    
    if(r%3 == 1)
        c2++;
    
    if(r%3 == 2)
        c2++, c3++;

    l--;
    int d1,d2,d3;
    d1 = d2 = d3 = l/3;

    if(l%3 == 1)
        d2++;
    
    if(l%3 == 2)
        d2++, d3++;

    c1 -= d1;
    c2 -= d2;
    c3 -= d3;

    a[1][0] = c1;
    a[1][1] = c2;
    a[1][2] = c3;

    for(int i=2;i<=n;i++)
    {
        a[i][0] = ((a[i-1][0]%mod * c1%mod)%mod + (a[i-1][1]%mod * c3%mod)%mod + (a[i-1][2]%mod * c2%mod)%mod)%mod;
        a[i][1] = ((a[i-1][0]%mod * c2%mod)%mod + (a[i-1][1]%mod * c1%mod)%mod + (a[i-1][2]%mod * c3%mod)%mod)%mod;
        a[i][2] = ((a[i-1][0]%mod * c3%mod)%mod + (a[i-1][1]%mod * c2%mod)%mod + (a[i-1][2]%mod * c1%mod)%mod)%mod;
    }

    cout << a[n][0] << endl;
}