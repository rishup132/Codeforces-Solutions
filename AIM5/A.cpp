#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

char a[200][200];

int32_t main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin >> a[i][j];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j] == 'B')
            {
                int count = 0;

                for(int k=i;k<n;k++)
                {
                    if(a[k][j] != 'B')
                        break;
                    count++;
                }

                cout << i+count/2+1 << " ";

                count = 0;

                for(int k=j;k<m;k++)
                {
                    if(a[i][k] != 'B')
                        break;
                    count++;
                }

                cout << j+count/2 + 1 << endl;

                return 0;
            }
        }
    }
}