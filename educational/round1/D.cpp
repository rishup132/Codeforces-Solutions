#include <bits/stdc++.h>

using namespace std;

int main()
{
    freopen("in.txt","r",stdin);
    freopen("o1.txt","w",stdout);
    int t;
    cin >> t;

    while(t--)
    {
        int x,y,k,ans = 0;
        cin >> x >> y >> k;

        while(k)
        {
            if(x > y)
                swap(x,y);

            if(k == x*y)
            {
                break;
            }
            else if(k%x == 0)
            {
                ans += x*x;
                break;
            }
            else if(k < x || k > x*(y-1))
            {
                ans += x*x + 1;
                break;
            }
            else
            {
                int temp = k/x;

                if(2*temp >= y)
                {
                    y -= temp;
                    k %= x;
                }
                else
                {
                    y = temp+1;
                }

                ans += x*x;
            }
        }

        cout << ans << endl;
    }
}