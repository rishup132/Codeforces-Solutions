#include <bits/stdc++.h>

using namespace std;

int a[100010];

int main()
{
    int n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++)
        cin >> a[i];

    if(k >= n)
    {
        cout << a[n-1] << endl;
        return 0;
    }

    int x = 2*k-n;
    int temp,ans = 0;

    for(int i=0;i<(n-x)/2;i++)
    {
        temp = a[i] + a[n-x-i-1];

        if(temp > ans)
            ans = temp;
    }

    for(int i=n-x;i<n;i++)
    {
        if(a[i] > ans)
            ans = a[i];
    }

    cout << ans << endl;
}