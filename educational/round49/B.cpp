#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n,q;
    cin >> n >> q;

    if(n%2 == 0)
    {
        int t1 = n*n/2;

        while(q--)
        {
            int x,y;
            cin >> x >> y;

            int to = n/2;

            int ans = (x-1)*to;
            ans += (y+1)/2;

            if((x+y)%2 == 1)
                ans += t1;

            cout << ans << endl;
        }
    }
    else
    {
        int t1 = n*n/2+1;

        while(q--)
        {
            int x,y,ans;
            cin >> x >> y;

            int to = n/2;

            if((x+y)%2 == 0)
            {
                int to1,to2;

                if(x%2 == 0)
                {
                    to1 = to2 = x/2;
                    to2--;
                }
                else
                {
                    to1 = to2 = x/2;
                }

                ans = (to+1)*to1 + to*to2;
                ans += (y+1)/2;
            }
            else
            {
                int to1,to2;

                if(x%2 == 0)
                {
                    to1 = to2 = x/2;
                    to1--;
                }
                else
                {
                    to1 = to2 = x/2;
                }

                ans = (to+1)*to1 + to*to2;
                ans += (y+1)/2;

                ans += t1;
            }

            cout << ans << endl;
        }
    }
}