#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[100010],b[100010];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<n;i++)
        cin >> b[i];

    if(a[0] == b[0] && a[n-1] == b[n-1])
    {
        for(int i=n-1;i>0;i--)
            a[i] -= a[i-1];

        for(int i=n-1;i>0;i--)
            b[i] -= b[i-1];

        sort(a+1,a+n);
        sort(b+1,b+n);

        for(int i=1;i<n;i++)
        {
            if(a[i] != b[i])
            {
                cout << "No\n";
                return 0;
            }
        }

        cout << "Yes\n";
    }
    else
        cout << "No\n";
}