#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[100];

int32_t main()
{
    int n,k;
    cin >> n >> k;

    int cnt = 0;
    int temp = n;

    a[0] = 1;

    for(int i=1;i<=32;i++)
        a[i] = 2*a[i-1];

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

                if(n - a[mid] - k >= 0)
                {
                    ans = mid;
                    l = mid + 1;
                }
                else
                    h = mid - 1;
            }

            cout << a[ans] << " ";
            n -= a[ans];
        }
    }
    else
        cout << "NO\n";
}