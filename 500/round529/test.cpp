#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int n,k;
    cin >> n >> k;

    int cnt = 0;
    int temp = n;

    while(temp)
    {
        if(temp%2)
            cnt++;
        temp /= 2;
    }

    if(k >= cnt && k <= n)
    {
        cout << "YES\n";

        while(k)
        {
            k--;
            int l = 0;
            int h = 32;
            int ans = 0;

            while(l <= h)
            {
                int mid = (l+h)/2;

                if(n - pow(2,mid) >= k)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                    h = mid - 1;
            }

            cout << pow(2,ans) << " ";
            n -= pow(2,ans);
        }
    }
    else
        cout << "NO\n";
}