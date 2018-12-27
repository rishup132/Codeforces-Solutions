#include <bits/stdc++.h>

#define endl "\n"

using namespace std;

int v[200010];

int32_t main()
{
    int n,s;
    cin >> n >> s;

    double ans = s*2.0;

    for(int i=1;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        v[x]++;
        v[y]++;
    }

    int count = 0;

    for(int i:v)
    {
        if(i == 1)
            count++;
    }

    cout << fixed << setprecision(10) << ans/count << endl;
}