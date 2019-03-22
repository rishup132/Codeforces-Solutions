#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[400010];
int b[200010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=1;i<n;i++)
        cin >> a[i];

    for(int i=2;i<n;i++)
        a[i] += a[i-1];

    int sum = 0;

    for(int i=1;i<n;i++)
        sum += a[i];

    sum = n*(n+1)/2 - sum;

    if(sum <= 0 || sum%n != 0)
    {
        cout << -1 << endl;
        return 0;
    }

    a[0] = sum/n;

    for(int i=1;i<n;i++)
        a[i] += a[0];

    for(int i=0;i<n;i++)
        b[i] = a[i];

    sort(a,a+n);

    if(a[0] != 1)
    {
        cout << -1 << endl;
        return 0;
    }

    for(int i=1;i<n;i++)
    {
        if(a[i] != a[i-1]+1)
        {
            cout << -1 << endl;
            return 0;
        }
    }

    for(int i=0;i<n;i++)
        cout << b[i] << " ";
    cout << endl;
}