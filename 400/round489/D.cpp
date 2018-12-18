#include <bits/stdc++.h>

#define ll long long
#define mod 2000000000000000000

using namespace std;

ll a[200010];

int main()
{
    ll n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++)
        cin >> a[i];

    ll count = 0;

    for(int i=0;i<n;i++)
    {
        ll sum = 0;
        ll prod = 1;

        for(int j=i;j<60+i && j<n;j++)
        {
            if(prod > mod/a[j])
                break;

            prod *= a[j];
            sum += a[j];

            if(prod == sum*k)
                count++;
        }
    }

    cout << count << endl;
}