#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int n,k;
ll int a[100];
ll int ans = 0;

void solve(int st, int pe, int res, ll int v)
{
    ll int temp;

    if(res == 0)
    {
        temp = (a[n]-a[pe]) & v;

        if(temp > ans)
            ans = temp;
        
        return;
    }

    for(int i=st;(n-i)>=res;i++)
    {
        temp = (a[i]-a[pe]) & v;

        if(temp != 0)
            solve(i+1,i,res-1,temp);
    }
}

int main()
{
    cin >> n >> k;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    a[0] = 0;

    for(int i=1;i<=n;i++)
        a[i] += a[i-1];

    if(k == 1)
    {
        cout << a[n] << endl;
        return 0;
    }

    ll int vv = 1,tt = 62;

    while(tt--)
    {
        vv = vv << 1;
        vv++;
    }

    solve(1,0,k-1,vv);

    cout << ans << endl;
}