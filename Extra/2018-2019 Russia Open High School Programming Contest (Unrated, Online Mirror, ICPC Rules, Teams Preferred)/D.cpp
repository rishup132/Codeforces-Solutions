#include <bits/stdc++.h>

using namespace std;

int a[200010];

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

        if(x == y-1)
            a[x]++;
    }

    for(int i=1;i<n;i++)
    {
        if(a[i] == 0)
        {
            cout << "YES\n";

            for(int j=1;j<=n;j++)
                cout << j << " ";
            cout << endl;

            for(int j=1;j<=n;j++)
            {
                if(j == i)
                    cout << j+1 << " ";
                else
                    cout << j << " ";
            }
            cout << endl;

            return 0;
        }
    }

    cout << "NO\n";
}