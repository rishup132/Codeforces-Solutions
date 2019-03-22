#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[200010];

int32_t main()
{
    int n,m,k;
    cin >> n >> m >> k;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    int cnt = a[n-1]*k + a[n-2];

    cout << (m/(k+1))*cnt + (m%(k+1))*a[n-1] << endl;
}