#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    int n,m;
    cin >> n >> m;

    int t = n/9;
    
    if(n%9 != 0)
        t++;

    int t3 = t;
    int t2 = t;

    while(t--)
        cout << 9;
    cout << endl;

    while(t2--)
        cout << 9;

    while(--t3)
        cout << 0;

    cout << 1 << endl;
}