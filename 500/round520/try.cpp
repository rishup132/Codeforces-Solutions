#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int a,b,k;
    cin >> a >> b >> k;

    cout << (a-b)*(k/2) + a*(k%2) << endl;
}