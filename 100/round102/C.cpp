#include <bits/stdc++.h>

#define int long long

using namespace std;

main()
{
    int n;
    cin >> n;

    int ans1,ans2;
    ans1 = 6*(n+2);
    ans2 = 9*(n+1);

    for(int i=1;i*i*i<=n;i++)
    {
        if(n%i == 0)
        {
            for(int j=i;j*j<=n/i;j++)
            {
                if(n%(i*j) == 0)
                {
                    int k = n/(i*j);

                    int a = (i+1)*(j+2)*(k+2);
                    int b = (j+1)*(i+2)*(k+2);
                    int c = (k+1)*(i+2)*(j+2);

                    ans1 = min(ans1,min(a,min(b,c)));
                    ans2 = max(ans2,max(a,max(b,c)));
                }
            }
        }
    }

    cout << ans1-n << " " << ans2-n << endl;
}