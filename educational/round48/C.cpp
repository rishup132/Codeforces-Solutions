#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int pref[2][300010],suf[2][300010],a[2][300010];
int pref1[2][300010],suf2[2][300010];

main()
{
    int n;
    cin >> n;

    for(int j=0;i<2;j++)
        for(int i=1;i<=n;i++)
            cin >> a[j][i];

    for(int j=0;i<2;j++)
        for(int i=1;i<=n;i++)
            pref[j][i] = pref[j][i-1] + a[j][i];

    for(int j=0;i<2;j++)
        for(int i=n;i>=1;i--)
            suf[j][i] = suf[j][i+1] + a[j][i];

    for(int j=0;i<2;j++)
        for(int i=1;i<=n;i++)
            pref1[j][i] = pref1[j][i-1] + pref[j][i];

    for(int j=0;i<2;j++)
        for(int i=n;i>=1;i--)
            suf1[j][i] = suf1[j][i+1] + suf[j][i];

    int sum = 0;
    int ans = 1e18;
    int cnt = 1;

    for(int i=1;i<=n;i++)
    {
        if(i%2)
        {
            int ans1 = sum;
            ans1 += suf1[0][i];
            ans1 += suf[0][i]*(cnt-1);
            
            sum += cnt*a[0][i];
            cnt++;
            sum += cnt*a[1][i];
            cnt++;
        }
        else
        {
            sum += cnt*a[1][i];
            cnt++;
            sum += cnt*a[0][i];
            cnt++;
        }
    }
}
