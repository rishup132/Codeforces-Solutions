#include <bits/stdc++.h>

#define int long long

using namespace std;

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
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    reverse(a,a+n);

    int ans = 0;
    int cnt = 2e9;

    for(int i=0;i<n;i++)
    {
        cnt = min(cnt,a[i]);
        ans += cnt;
        cnt = max(0LL,cnt-1);
    }

    cout << ans << endl;
}