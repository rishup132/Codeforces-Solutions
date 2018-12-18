#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[1010],b[1010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    if(n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    for(int i=0;i<n;i++)
    {
        if(i == 0)
        {
            if(a[i+1] == 2)
                b[i] = 1;
        }
        else if(i == n-1)
        {
            if(a[i-1] == 999)
                b[i] = 1;
        }
        else
        {
            if(a[i+1]-a[i-1] == 2)
                b[i] = 1;
        }
    }

    int ans = 0;
    int count = 0;

    for(int i=0;i<n;i++)
    {
        if(b[i] == 0)
            count = 0;
        else
            count++, ans = max(ans,count);
    }

    cout << ans << endl;

    return 0;
}