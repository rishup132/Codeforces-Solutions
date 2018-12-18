#include <bits/stdc++.h>

using namespace std;

char a[1010][1010];

int main()
{
    int n,m;
    cin >> n >> m;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin >> a[i][j];
    }

    for(int i=0;i<=(m+1);i++)
        a[0][i] = a[n+1][i] = '.';

    for(int i=0;i<=(n+1);i++)
        a[i][0] = a[i][m+1] = '.';

    bool flag = false;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(a[i][j] == '.')
            {
                if(a[i-1][j-1] == '*' || a[i-1][j] == '*' || a[i][j-1] == '*' || a[i-1][j+1] == '*' ||
                    a[i][j+1] == '*' || a[i+1][j-1] == '*' || a[i+1][j] == '*' || a[i+1][j+1] == '*')
                {
                    flag = true;
                }
            }
            else if(a[i][j] == '*')
            {
                continue;
            }
            else
            {
                int count = 0;

                if(a[i-1][j-1] == '*') 
                    count++;
                if(a[i-1][j] == '*') 
                    count++;
                if(a[i][j-1] == '*') 
                    count++;
                if(a[i-1][j+1] == '*') 
                    count++;
                if(a[i][j+1] == '*') 
                    count++;
                if(a[i+1][j-1] == '*') 
                    count++;
                if(a[i+1][j] == '*') 
                    count++;
                if(a[i+1][j+1] == '*') 
                    count++;

                //cout << count << endl;

                if(count != (a[i][j]-'0'))
                    flag = true;
            }
        }
    }

    if(flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}