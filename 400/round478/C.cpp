#include<bits/stdc++.h>

#define ll long long
#define mod 998244353

using namespace std;

ll int a[300000],b[300000];

int main()
{
    ll int n,q,x;
    cin >> n >> q;

    ll int ans,tt1=0,tt2 = 0;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        tt1 += a[i];
    }

    for(int i=1;i<n;i++)
        a[i] += a[i-1];

    ll int *p;

    while(q--)
    {
        cin >> x;

        tt2 += x;

        p = upper_bound(a,a+n,tt2);

        ans = p - a;
        ans = n - ans;

        //cout << tt2 << endl;

        if(tt2 >= tt1)
        {
            tt2 = 0;
            cout << n << endl;
        }
        else
            cout << ans << endl;
    }
}