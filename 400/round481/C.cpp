#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll int a[200010];

int main()
{
    ll int n,m,x;
    cin >> n >> m;

    a[0] = 0;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    for(int i=2;i<=n;i++)
        a[i] += a[i-1];

    while(m--)
    {
        cin >> x;

        ll int *p = upper_bound(a,a+n,x);

        if(x == *(p-1))
            cout << p-a-1 << " " << a[p-a-1]-a[p-a-2] << endl;
        else
            cout << (p-a) << " " << x-*(p-1) << endl;
    }
}