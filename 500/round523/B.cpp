#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[200010];

int32_t main()
{
    int n,m;
    cin >> n >> m;

    int sum = 0;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    int cnt = 1;

    for(int i=0;i<n;i++)
    {
        if(a[i] >= cnt)
        {
            if(i == n-1)
                sum += cnt - 1;
            else
            {
                cnt++;
                sum += a[i] - 1;
            }
        }
        else
            sum += a[i] - 1;
    }

    cout << sum << endl;
}