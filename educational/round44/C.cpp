#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll int a[100010];

int main()
{
    ll int n,k,l;
    cin >> n >> k >> l;

    for(int i=0;i<n*k;i++)
        cin >> a[i];

    sort(a,a+n*k);

    l += a[0];

    ll int *p = upper_bound(a,a+n*k,l);

    ll int j = p-a;

    ll int temp = n*k - j;

    ll int ans = 0;

    if(k == 1)
    {
        if(temp > 0)
            cout << 0 << endl;
        else
        {
            for(int i=0;i<n*k;i++)
                ans += a[i];

            cout << ans << endl;
        }
        return 0;
    }

    ll int temp1 = temp/(k-1);

    temp = temp%(k-1);

    if(temp != 0)
        temp = k - temp;

    if((temp+temp1) > j)
    {
        cout << 0 << endl;
        return 0;
    }

    while(temp1--)
        ans += a[--j];

    for(int i=0;i<j;i+=k)
        ans += a[i];

    cout << ans << endl;
}