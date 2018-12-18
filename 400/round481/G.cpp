#include <bits/stdc++.h>

#define ll long long

using namespace std;

struct tree{
    int x,y,z;
};

int a[110];
tree b[110];

int main()
{
    int n,m,x,y,z;
    cin >> n >> m;

    for(int i=1;i<=n;i++)
        a[i] = 0;

    for(int i=1;i<=m;i++)
    {
        cin >> b[i].x >> b[i].y >> b[i].z;

        a[b[i].y] = m+1;
    }

    for(int i=1;i<=m;i++)
    {
        x = b[i].x;
        y = b[i].y;
        z = b[i].z;

        while(true && z)
        {
            y--;
            
            if(x > y)
            {
                cout << -1 << endl;
                return 0;
            }

            if(a[y] == 0)
            {
                a[y] = i;
                z--;
            }
        }
    }

    for(int i=1;i<=n;i++)
        cout << a[i] << " ";
    cout << endl;
}