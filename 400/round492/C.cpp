#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[5][210];
vector <pair<int,pair<int,int> > > v;
int n,k;

void solve(int x, int y, int k1)
{
    if(k1 == 1)
        return;

    if(x == 2 && y == 1)
    {
        if(a[x+1][y])
            v.push_back(make_pair(a[x+1][y],make_pair(2,1)));

        a[x][y] = a[x+1][y];
        a[x+1][y] = 0;
        solve(x+1,y,k1-1);
    }
    else if(x == 3 && y == n)
    {
        if(a[x-1][y])
            v.push_back(make_pair(a[x-1][y],make_pair(3,n)));

        a[x][y] = a[x-1][y];
        a[x-1][y] = 0;
        solve(x-1,y,k1-1);
    }
    else if(x == 2)
    {
        if(a[x][y-1])
            v.push_back(make_pair(a[x][y-1],make_pair(2,y)));

        a[x][y] = a[x][y-1];
        a[x][y-1] = 0;
        solve(x,y-1,k1-1);
    }
    else
    {
        if(a[x][y+1])
            v.push_back(make_pair(a[x][y+1],make_pair(3,y)));

        a[x][y] = a[x][y+1];
        a[x][y+1] = 0;
        solve(x,y+1,k1-1);
    }
}

int main()
{
    cin >> n >> k;

    for(int i=1;i<=4;i++)
    {
        for(int j=1;j<=n;j++)
            cin >> a[i][j];
    }

    int count = 0;

    do{
        for(int i=1;i<=n;i++)
        {
            if(a[1][i] != 0 && a[1][i] == a[2][i])
            {
                v.push_back(make_pair(a[2][i],make_pair(1,i)));
                a[2][i] = 0;
                count++;
            }

            if(a[4][i] != 0 && a[3][i] == a[4][i])
            {
                v.push_back(make_pair(a[3][i],make_pair(4,i)));
                a[3][i] = 0;
                count++;
            }
        }

        //cout << "ax" << endl;

        if(count == 0 and k == 2*n)
        {
            cout << -1 << endl;
            return 0;
        }

        int x,y;

        for(int i=1;i<=n;i++)
        {
            if(a[2][i] == 0)
            {
                x = 2;
                y = i;
                break;
            }

            if(a[3][i] == 0)
            {
                x = 3;
                y = i;
                break;
            }
        }

        solve(x,y,2*n);

    }while(count < k);

    cout << v.size() << endl;

    for(int i=0;i<v.size();i++)
        cout << v[i].first << " " << v[i].second.first << " " << v[i].second.second << endl;
}