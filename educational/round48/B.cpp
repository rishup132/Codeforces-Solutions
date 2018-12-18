#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[1010];

main()
{
    int n,m,q;
    cin >> n >> m >> q;

    string s,t;
    cin >> s >> t;

    for(int i=m-1;i<n;i++)
    {
        bool flag = true;

        for(int j=m-1,k=0;j>=0;j--,k++)
        {
            if(s[i-k] != t[j])
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            for(int j=i,k=m-1;k>=0;k--,j--)
                a[j] += 1;
        }
    }

    for(int i=1;i<n;i++)
        a[i] += a[i-1];

    while(q--)
    {
        int x,y;
        cin >> x >> y;
        x--;
        y--;

        if(abs(x-y)+1 < m)
            cout << 0 << endl;
        else if(x == 0)
            cout << a[y]/m << endl;
        else
            cout << (a[y] - a[x-1])/m << endl;
    }
}