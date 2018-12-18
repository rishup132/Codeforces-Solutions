#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[1000010];

int32_t main()
{
    int n;
    cin >> n;

    int c,sum,mi,x;
    c = sum = 0;
    mi = INT_MAX;

    for(int i=0;i<n;i++)
    {
        cin >> x;

        if(x >= 0)
            c++;
        
        sum += abs(x);
        mi = min(mi,abs(x));
    }

    if(n == 1)
        cout << x << endl;
    else
        cout << (c == 0 || c == n ? sum - 2*mi : sum) << endl;
}