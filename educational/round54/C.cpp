#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int t;
    cin >> t;

    while(t--)
    {
        double d;
        cin >> d;

        if(d == 1 || d == 2 || d == 3)
            cout << "N\n";
        else
        {
            double t1 = d + sqrt(d*d - 4*d);
            double t2 = d - sqrt(d*d - 4*d);

            t1 /= 2;
            t2 /= 2;

            cout << "Y ";
            cout << fixed << setprecision(15) << t1 << " " << t2 << endl;
        }
    }
}