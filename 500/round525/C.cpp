#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[100010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i], a[i] += 500000;

    cout << n+1 << endl;

    cout << 1 << " " << n << " " << 500000 << endl;

    for(int i=0;i<n;i++)
        cout << 2 << " " << i+1 << " " << a[i]-i << endl;
    return 0;
}