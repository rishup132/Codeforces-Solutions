#include <bits/stdc++.h>

#define p pair<int,int>

using namespace std;

int a[100010];

int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    sort(a+1,a+n+1);

    a[0] = 10;

    int count = 0;
    int ans = 0;

    for(int i=1;i<=n;i++)
    {
        a[i] += a[i-1];

        if(a[i] <= 360)
            count++;
        else if(a[i] <= 720)
        {
            count++;
            ans += a[i]-360;
        }
    }

    cout << count << " " << ans << endl;
}