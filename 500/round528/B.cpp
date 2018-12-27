#include <bits/stdc++.h>

using namespace std;

int32_t main()
{
    int n,k;
    cin >> n >> k;

    int ans = n*k+1;

    for(int i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            if(k <= i)
                break;

            int temp = n/i;
            temp = temp*k + i;

            ans = min(ans,temp);
        }
    }

    cout << ans << endl;
}