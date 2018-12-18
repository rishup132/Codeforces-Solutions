#include <bits/stdc++.h>

using namespace std;

int a[200010];

int32_t main()
{
    int n;
    cin >> n;

    int mx = -1;

    for(int i=0;i<n;i++)
        cin >> a[i], mx = max(a[i],mx);

    for(int i=0;i<n;i++)
    {
        if(a[i] < mx)
        {
            int temp = mx - a[i];

            if(temp%2 == 0)
                a[i] = mx;
            else
                a[i] = mx - 1;
        }
    }

    for(int i=0;i<n-1;i++)
    {
        if(a[i] == a[i+1] && a[i] == mx-1)
            a[i]++, a[i+1]++;
    }

    for(int i=0;i<n-1;i++)
    {
        if(a[i] == a[i+1] && a[i] == mx)
            a[i]++, a[i+1]++;
    }

    for(int i=0;i<n;i++)
    {
        if(a[i] == mx)
        {
            cout << "NO\n";
            return 0;
        }
    }

    cout << "YES\n";
}