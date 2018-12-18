#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

vector <int> v[100010];
vector <int> q[110];

int a[100010],c[100010][110];

int main()
{
    int n,m,k,s,x,y;
    scanf("%d%d%d%d",&n,&m,&k,&s);

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
            c[i][j] = -1;
    }

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        c[i][a[i]] = 0;
        q[a[i]].push_back(i);
    }

    for(int i=0;i<m;i++)
    {
        scanf("%d%d",&x,&y);

        v[x].push_back(y);
        v[y].push_back(x);
    }

    for(int i=1;i<=k;i++)
    {
        for(int j=0;j<q[i].size();j++)
        {
            for(int l=0;l<v[q[i][j]].size();l++)
            {
                if(c[v[q[i][j]][l]][i] == -1)
                {
                    c[v[q[i][j]][l]][i] = c[q[i][j]][i]+1;
                    q[i].push_back(v[q[i][j]][l]);
                }
            }
        }
    }

    /*for(int i=1;i<=n;i++)
    {
        queue <int> q;
        q.push(i);

        while(!q.empty())
        {
            int sr = q.front();
            q.pop();

            for(int j=0;j<v[sr].size();j++)
            {
                if(c[v[sr][j]][a[i]] > c[sr][a[i]])
                {
                    q.push(v[sr][j]);
                    c[v[sr][j]][a[i]] = c[sr][a[i]]+1;
                }
            }
        }
    }*/

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=k;j++)
            a[j] = c[i][j];

        sort(a+1,a+k+1);

        int l = s;
        int sum = 0;

        while(l)
            sum += a[l--];

        printf("%d ",sum);
    }
    printf("\n");
}