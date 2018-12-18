#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[110][110];
char s[110][110];

void solve(int st, int ed)
{
    if(s[st+1][ed] == '#' || s[st-1][ed] == '#' || s[st][ed+1] == '#' || s[st][ed-1] == '#')
        return;

    if(s[st+1][ed] == '*' && s[st-1][ed] == '*' && s[st][ed+1] == '*' && s[st][ed-1] == '*')
    {
        solve(s[st+1][ed]++);
        solve(s[st-][ed]++);
        solve(s[st][ed+1]++);
        solve(s[st][ed-1]++);
    }
}

main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<=n+1;i++)
    {
        for(int j=0;j<=m+1;j++)
            s[i][j] = '#';
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
            cin >> s[i][j];
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            solve(i,j);
        }
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=m;j++)
        {
            if(s[i][j] == '*' && a[i][j] == 0)
            {
                cout << -1 << endl;
                return 0;
            }
        }
    }

    
}