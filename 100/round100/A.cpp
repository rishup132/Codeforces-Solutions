#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define pi 3.14159265

using namespace std;

main()
{
    double n,r1,r2;
    cin >> n >> r1 >> r2;

    if(r1 < r2)
    {
        cout << "NO" << endl;
        return 0;
    }
    else if(r1 < 2*r2)
    {
        if(n < 2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        return 0;
    }
    else if(n == 1)
    {
        cout << "YES" << endl;
        return 0;
    }

    double temp = (r1-r2)*sin(pi/n);

    if(abs(temp-r2) < 1e-7 || temp > r2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}