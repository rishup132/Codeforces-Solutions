#include <bits/stdc++.h>

#define ll long long

using namespace std;

int a[200010],b[200010];

int main()
{
    int n,count,ans = 1e9,d;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    vector <int> v;

    for(int x = -1; x <= 1; x++)
    {
        for(int y = -1; y <= 1; y++)
        {
            count = 0;

            b[0] = a[0] + x;
            b[1] = a[1] + y;

            d = b[1] - b[0];

            for(int i=2;i<n;i++)
                b[i] = b[i-1] + d;

            bool flag = true;

            for(int i=0;i<n;i++)
            {
                if(a[i] == b[i])
                    continue;
                else if(abs(a[i]-b[i]) == 1)
                    count++;
                else
                {
                    flag = false;
                    break;
                }
            }

            if(flag && ans > count)
                ans = count;
        }
    }

    if(ans == 1e9)
        cout << -1 << endl;
    else
        cout << ans << endl;
}