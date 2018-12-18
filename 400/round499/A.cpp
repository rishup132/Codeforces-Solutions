#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

double a[1100],b[1100];

main()
{
    int n;
    double m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
        cin >> a[i];

    cin >> b[n-1];
    
    for(int j=0;j<n-1;j++)
        cin >> b[j];

    double l = 0;
    double h = 1000000000;

    while((h-l) >= 1e-14)
    {
        double mid = (l+h)/2.0;

        //cout << l << " " << h << " " << mid << endl;

        bool flag = true;
        double temp = mid;

        for(int i=0;i<n;i++)
        {
            temp -= (m+temp)/a[i];

            if(temp < -1e-14)
            {
                flag = false;
                break;
            }

            temp -= (m+temp)/b[i];

            if(temp < -1e-14)
            {
                flag = false;
                break;
            }
        }

        if(!flag)
            l = mid;
        else
            h = mid;
    }

    bool flag = true;
    double temp = l;

    for(int i=0;i<n;i++)
    {
        temp -= (m+temp)/a[i];

        if(temp < -1e-6)
        {
            flag = false;
            break;
        }

        temp -= (m+temp)/b[i];

        if(temp < -1e-6)
        {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << fixed << setprecision(15) << l << endl;
    else
        cout << -1 << endl;
}