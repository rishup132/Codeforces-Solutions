#include <bits/stdc++.h>

#define int long long
#define endl "\n"
#define pi 3.141592653589793

using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    for(int j=1;j<=t;j++)
    {
        double m,k;
        cin >> m >> k;

        double cnt = cbrt((3.0*m)/(4*pi*k));
        
        cout << "Case " << j << ": ";
        cout << fixed << setprecision(4) << 4*pi*cnt*cnt << endl;
    }
}