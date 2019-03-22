#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[2000][3];
char b[2000][3];

int32_t main()
{
    int t;
    cin >> t;

    for(int p=1;p<=t;p++)
    {
        for(int i=0;i<2000;i++)
        {
            for(int j=0;j<3;j++)
                a[i][j] = 0;
        }

        int n;
        cin >> n;

        a[0][0] = 1;

        for(int i=1;i<=n;i++)
            cin >> b[i][0];

        for(int i=1;i<=n;i++)
            cin >> b[i][1];
        
        for(int i=1;i<=n;i++)
            cin >> b[i][2];

        for(int i=1;i<=n;i++)
        {
            if(i%2 == 1)
            {
                if(b[i][0] == '.' && b[i][1] == '.')
                    a[i][1] += a[i-1][0];

                if(b[i][2] == '.' && b[i][1] == '.')
                    a[i][1] += a[i-1][2];
            }
            else
            {
                if(b[i][0] == '.' && b[i][1] == '.')
                    a[i][0] += a[i-1][1];

                if(b[i][2] == '.' && b[i][1] == '.')
                    a[i][2] += a[i-1][1];
            }

            for(int j=0;j<3;j++)
                a[i][j] %= mod;
        }

        cout << "Case #" << p << ": ";
        cout << a[n][2] << endl;
    }
}