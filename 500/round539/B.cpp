#include <bits/stdc++.h>

using namespace std;

int a[500010];

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    int mi = 1000;
    int sum = 0;

    for(int i=0;i<n;i++)
        cin >> a[i], mi = min(mi,a[i]), sum += a[i];

    int ans = sum;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=a[i];j++)
        {
            if(a[i]%j == 0)
            {
                int sum1 = sum - a[i] + a[i]/j - mi + mi*j;
                ans = min(ans,sum1);
            }
        }
    }

    cout << ans << endl;
}