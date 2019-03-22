#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[1010],b[1010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    int ans = 0;

    for(int i=2;i<=2e5;i++)
    {
        int cnt = n-1;
        int count = 0;

        for(int j=0;j<n;j++)
        {
            if(j >= cnt)
                break;

            while(a[cnt] > i-a[j])
                cnt--;

            if(cnt != j && a[cnt]+a[j] == i)
                count++;
        }

        ans = max(ans,count);
    }

    cout << ans << endl;
}