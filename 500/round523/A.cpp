#include <bits/stdc++.h>

#define int long long

using namespace std;

int32_t main()
{
    int n,k;
    cin >> k >> n;

    cout << n/k + (n%k != 0) << endl;
}