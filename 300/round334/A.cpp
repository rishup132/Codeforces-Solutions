#include <bits/stdc++.h>

using namespace std;

int main()
{
    int a[5] = {2,4,6,8,10};
    int b[5] = {150,300,450,600,750};

    int c[5],d[5];

    for(int i=0;i<5;i++)
    {
        cin >> c[i];
        c[i] = 250 - c[i];
        c[i] *= a[i];
    }

    int ans = 0;
    
    for(int i=0;i<5;i++)
    {
        cin >> d[i];
        d[i] *= 50;
        c[i] -= d[i];
        b[i] = max(b[i],c[i]);
        ans += b[i];
    }

    int x,y;
    cin >> x >> y;

    cout << ans + 100*x - 50*y << endl;
}