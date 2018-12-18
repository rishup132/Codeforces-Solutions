#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n,h,a,b,k;
    cin >> n >> h >> a >> b >> k;

    while(k--)
    {
        int w,x,y,z;
        cin >> w >> x >> y >> z;

        int ans = abs(w-y);

        if(w == y)
        {
            cout << abs(x-z) << endl;
        }
        else
        {
            if(x < a)
            {
                ans += abs(a-x);
                x = a;
            }
            else if(x > b)
            {
                ans += abs(b-x);
                x = b;
            }

            if(z < a)
            {
                ans += abs(a-z);
                z = a;
            }
            else if(z > b)
            {
                ans += abs(b-z);
                z = b;
            }

            ans += abs(x-z);

            cout << ans << endl;
        }
    }
}