#include <bits/stdc++.h>

using namespace std;

map <pair<int,int>, int> mp;
int a[200010],b[200010];

int32_t main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<m;i++)
    {
        int x,y;
        cin >> x >> y;

        if(x > y)
            swap(x,y);

        mp[{x,y}]++;
    }

    for(int i=1;i<=n;i++)
    {
        for(int j=i+1;j<=n;j++)
        {
            if(i != j && mp[{i,j}] == 0)
            {
                cout << "YES\n";
                int cnt = 1;

                for(int k=1;k<=n;k++)
                {
                    if(k == i)
                        cout << n-1 << " ";
                    else if(k == j)
                        cout << n << " ";
                    else
                        cout << cnt++ << " ";
                }
                cout << endl;

                cnt = 1;
                for(int k=1;k<=n;k++)
                {
                    if(k == i)
                        cout << n << " ";
                    else if(k == j)
                        cout << n << " ";
                    else
                        cout << cnt++ << " ";
                }
                cout << endl;

                return 0;
            }
        }
    }

    cout << "NO\n";
}