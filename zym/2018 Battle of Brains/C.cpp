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
        double r;
        cin >> r;
        
        cout << "Case " << j << ": ";
        cout << fixed << setprecision(4) << r*r/4 << endl;
    }
}