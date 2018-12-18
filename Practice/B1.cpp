#include <bits/stdc++.h>

#define ll long long

using namespace std;

int a[110][110];
int b[110][110];

int main()
{
    std::ios_base::sync_with_stdio(false);

    for(int i=0;i<100;i++)
    {
        for(int j=0;j<100;j++)
        {
            if((i+j)%2 == 0)
            {
                a[i][j] = 0;
                b[i][j] = 1;
            }
            else
            {
                a[i][j] = 1;
                b[i][j] = 0;
            }
        }
    }

    int n,y;
    cin >> n;
    char x;

    pair <int,int> p[4];

    for(int i=0;i<4;i++)
    {
        for(int j=0;j<n;j++)
        {
            for(int k=0;k<n;k++)
            {
                cin >> x;

                y = x - '0';

                if(y != a[j][k])
                    p[i].first++;
                
                if(y != b[j][k])
                    p[i].second++;
            }
        }
    }

    int ans = 1000000007,temp=0;

    for(int i=0;i<4;i++)
    {
        temp = p[i].first;

        for(int j=i+1;j<4;j++)
        {
            temp += p[j].first;

            for(int k=0;k<4;k++)
            {
                if(k != i && k != j)
                    temp += p[k].second;
            }

            if(ans > temp)
                ans = temp;

            temp = p[i].first;
        }

        temp = 0;
    }

    cout << ans << endl;
}
