#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int ans[1000];

int32_t main()
{
    for(int &i:ans)
        i = 1000;

    for(int i=3;i<=180;i++)
    {
        if(180%i == 0)
        {
            int temp = 180/i;
            int temp1 = temp*(i-2);

            for(int j=temp;j<=temp1;j+=temp)
                ans[j] = min(ans[j],i);
        }
    }

    for(int i=1;i<180;i++)
    {
        int temp = 180-i;

        if(360%temp == 0)
            ans[i] = min(ans[i],360/temp);
    }

    // for(int i=1;i<180;i++)
    //     cout << ans[i] << " ";

    int t;
    cin >> t;

    while(t--)
    {
        int x;
        cin >> x;

        cout << ans[x] << endl;
    }
}