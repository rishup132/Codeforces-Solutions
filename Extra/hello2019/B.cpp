#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int a[100];

int32_t main()
{
    int n;
    cin >> n;

    int sum = 0;

    for(int i=0;i<n;i++)
        cin >> a[i], sum += a[i];

    for(int i=0;i<=1e6;i++)
    {
        int t = i;
        int cnt = n;
        int cnt1 = 0;

        while(cnt--)
        {
            if(t%2)
                cnt1 += a[cnt];

            t /= 2;
        }

        int cnt2 = sum - cnt1;
        cnt1 %= 360;
        cnt2 %= 360;

        if(cnt1 == cnt2)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
}