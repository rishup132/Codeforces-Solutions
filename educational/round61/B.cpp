#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[300010],b[300010];

int32_t main()
{
    int n;
    cin >> n;

    int sum = 0;

    for(int i=0;i<n;i++)
        cin >> a[i], sum += a[i];

    sort(a,a+n);

    int m;
    cin >> m;

    for(int i=0;i<m;i++)
    {
        int x;
        cin >> x;

        //cout << sum << " " << a[n-x] << endl;

        cout << sum - a[n-x] << endl;
    }
    
}