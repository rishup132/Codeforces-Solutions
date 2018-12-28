#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[200010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    cout << min(a[n-1]-a[1],a[n-2]-a[0]) << endl;
}