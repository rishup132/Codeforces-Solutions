#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int x;
    cin >> x;

    for(int i=1;i<=x;i++)
    {
        for(int j=1;j<=x;j++)
        {
            if(i%j == 0)
            {
                if(i*j > x && i/j < x)
                {
                    cout << i << " " << j << endl;
                    return 0;
                }
            }
        }
    }
    
    cout << -1 << endl;
    return 0;
}