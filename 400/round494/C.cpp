#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[100010];

int main()
{
    int n,k;
    cin >> n >> k;

    a[0] = 0;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    for(int i=1;i<=n;i++)
        a[i] += a[i-1];

    double ans = 0;

    while(k <= n)
    {
        for(int i=0;i<=n-k;i++)
        {
            double temp = a[k+i] - a[i];

            temp = temp/k;
            
            if(ans < temp)
                ans = temp;
        }
        k++;
    }

    cout << setprecision(15) << ans << endl;
}