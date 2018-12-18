#include <bits/stdc++.h>

using namespace std;

int32_t main()
{
    int n = 1;
    int a,b;
    a = b = 0;

    for(int i=0;i<30;i++)
    {
        int x,y;

        cout << "? " << n << " " << n << endl;
        cin >> x;

        cout << "? " << n << " " << 0 << endl;
        cin >> y;

        if(x == 0 && y == -1)
            a += n, b += n;
        else if(x == 1)
            b += n;
        else
            a += n;

        n = n << 1;
    }

    cout << "! " << a << " " << b << endl;

    return 0;
}