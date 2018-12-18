#include <bits/stdc++.h>

#define int long long int
#define mod 1000000007

using namespace std;

int a[200010];

main()
{
    int n;
    cin >> n;

    for(int i=0;i<2*n;i++)
        cin >> a[i];

    sort(a,a+2*n);

    int ans = abs((a[0]-a[n-1])*(a[n]-a[2*n-1]));

    for(int i=1;i<n;i++)
    {
        int temp = abs((a[i]-a[n-1+i])*(a[0]-a[2*n-1]));

        if(ans > temp)
            ans = temp;
    }

    cout << ans << endl;
}