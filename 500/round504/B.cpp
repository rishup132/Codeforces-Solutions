#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n,k;
    cin >> n >> k;

    int l = 1;
    int h = n;
    int ans = 1e15;

    while(l <= h)
    {
        int mid = (l+h)/2;

        int temp = k - mid;

        if(temp > n)
            l = mid + 1;
        else
        {
            h = mid - 1;
            ans = min(ans,mid);
        }
    }

    if(ans == 1e15)
        cout << 0 << endl;
    else
    {
        k -= ans;
        k -= ans;
        k++;
        cout << k/2 << endl;
    }
}