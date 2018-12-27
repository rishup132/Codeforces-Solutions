#include <bits/stdc++.h>

using namespace std;

int a[200010],b[200010],c[200010];



int main()
{
    int n,q;
    cin >> n >> q;

    for(int i=0;i<n;i++)
        cin >> a[i], c[a[i]] = i;

    for(int i=0;i<n;i++)
        cin >> b[i], b[i] = c[b[i]];

    while(q--)
    {
        int t;
        cin >> t;

        if(t == 2)
        {
            int x,y;
            cin >> x >> y;
            x--;
            y--;

            swap(c[x],c[y]);

            update(1,0,n-1,x,c[x],c[y]);
            update(1,0,n-1,x,c[y],c[x]);
        }
        else
        {
            int l1,r1,l2,r2;
            cin >> l1 >> r1 >> l2 >> r2;
            l1--;
            r1--;
            l2--;
            r2--;

            cout << query(1,0,n-1,l2,r2,l1,r1) << endl;
        }
    }
}