#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ll int n,k,m,d;
    cin >> n >> k >> m >> d;

    ll int low = 1, high = m;

    ll int ans = 0;

    while(low <= high)
    {
        ll int mid = (low+high)/2;

        ll int temp = n/mid;
        temp /= k;

        if(temp != 0)
        {
            ll int temp1 = n-temp*k*mid;

            if(temp1 >= mid)
                temp++;
        }
        else
            temp++;

        if(temp > d)
            low = mid+1;
        else
        {
            if(ans < temp*mid)
                ans = temp*mid;

            if(mid == high)
                break;
            
            high = mid;
        }
    }

    cout << ans << endl;
}