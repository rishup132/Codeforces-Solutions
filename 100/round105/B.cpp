#include <bits/stdc++.h>

using namespace std;

int main()
{
    double vp,vd,t,f,c;
    cin >> vp >> vd >> t >> f >> c;

    if(vp >= vd)
    {
        cout << 0 << endl;
        return 0;
    }

    double p = t*vp;
    double d = 0;
    int count = 0;

    while(p < c)
    {
        double tt = p/(vd-vp);
        p += tt*vp;

        if(p < c)
        {
            count++;
            p += (f+p/vd)*vp;
            d = 0;
        }
    }

    cout << count << endl;
}