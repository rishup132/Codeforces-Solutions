#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[2000];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    int ans = 1e9;
    int id = -1;

    for(int i=1;i<=100;i++)
    {
        int cnt = 0;

        for(int j=0;j<n;j++)
            cnt += max(0LL,abs(a[j]-i)-1);

        if(ans > cnt)
        {
            id = i;
            ans = cnt;
        }
    }

    cout << id << " " << ans << endl;
}