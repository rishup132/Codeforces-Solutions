#include <bits/stdc++.h>

using namespace std;

int a[1010][1010];
char b[1010][1010];
bool mark1[1010][1010],mark2[1010][1010];
int ans;

int dfs1(int x, int y)
{
    ans += a[x][y];
    mark1[x][y] = true;

    if(b[x][y+1] == '.' && mark1[x][y+1] == false)
        dfs1(x,y+1);
    
    if(b[x][y-1] == '.' && mark1[x][y-1] == false)
        dfs1(x,y-1);

    if(b[x+1][y] == '.' && mark1[x+1][y] == false)
        dfs1(x+1,y);

    if(b[x-1][y] == '.' && mark1[x-1][y] == false)
        dfs1(x-1,y);
}

void dfs2(int x, int y, int val)
{
    a[x][y] = val;
    mark2[x][y] = true;

    if(b[x][y+1] == '.' && mark2[x][y+1] == false)
        dfs2(x,y+1,val);
    
    if(b[x][y-1] == '.' && mark2[x][y-1] == false)
        dfs2(x,y-1,val);

    if(b[x+1][y] == '.' && mark2[x+1][y] == false)
        dfs2(x+1,y,val);

    if(b[x-1][y] == '.' && mark2[x-1][y] == false)
        dfs2(x-1,y,val);
}

int main()
{
    int n,m,k;
    cin >> n >> m >> k;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            a[i][j] = 0;
            cin >> b[i][j];
            mark2[i][j] = mark1[i][j] = false;
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[i][j] == '.')
            {
                if(b[i][j+1] == '*')
                    a[i][j]++;
                
                if(b[i][j-1] == '*')
                    a[i][j]++;

                if(b[i+1][j] == '*')
                    a[i][j]++;

                if(b[i-1][j] == '*')
                    a[i][j]++;
            }
        }
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(b[i][j] == '.' && mark1[i][j] == false)
            {
                ans = 0;
                dfs1(i,j);
                dfs2(i,j,ans);
            }
        }
    }

    while(k--)
    {
        int x,y;
        cin >> x >> y;

        cout << a[x-1][y-1] << endl;
    }
}