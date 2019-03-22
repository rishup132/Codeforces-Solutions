#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int n,k;
    cin >> n >> k;

    int cnt = k*(k-1);

    if(n > cnt)
    {
        cout << "no";
        return 0;
    }

    cout << "yes\n";

    for(int i=1;i<=k;i++)
    {
        for(int j=i+1;j<=k;j++)
        {
            if(n == 0)
                break;

            n--;

            cout << i << " " << j << endl;

            if(n == 0)
                break;

            n--;

            cout << j << " " << i << endl;
        }
    }
}