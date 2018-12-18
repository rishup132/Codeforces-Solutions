#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n >> m;

    if(m == 0)
    {
        cout << n << " " << n << endl;
        return 0;
    }

    cout << max(0LL,n - 2*m) << " ";

    int l = 1;
    int h = 1e9;
    int ans = 0;

    while(l <= h)
    {
        int mid = (l+h)/2;

        int temp = mid*(mid-1)/2;

        if(temp > m)
            h = mid - 1;
        else
        {
            l = mid + 1;
            ans = mid;
        }
    }

    int temp = ans*(ans-1)/2;

    if(temp < m)
        ans++;

    cout << n - ans << endl;

    return 0;
}