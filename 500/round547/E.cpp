#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[400010];
int b[200010];

int32_t main()
{
    int hi,n;
    cin >> hi >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=1;i<n;i++)
        a[i] += a[i-1];

    for(int i=0;i<n;i++)
    {
        if(a[i]+hi <= 0)
        {
            cout << i+1 << endl;
            return 0;
        }
    }

    if(a[n-1] >= 0)
    {
        cout << -1 << endl;
        return 0;
    }

    // cout << a[n-1] << endl;

    int l = 1;
    int h = (hi+abs(a[n-1])-1)/abs(a[n-1]);
    int ans = -1;

    while(l <= h)
    {
        int mid = (l+h)/2;

        int temp = hi + mid*a[n-1];
        int cnt = mid*n;

        if(temp > 0)
        {
            cnt = -1;

            for(int i=0;i<n;i++)
            {
                if(a[i]+temp <= 0)
                {
                    cnt = mid*n + i+1;
                    break;
                }
            }
        }

        if(cnt == -1)
            l = mid + 1;
        else
        {
            h = mid - 1;
            ans = cnt;
        }
    }
    
    cout << ans << endl;
}