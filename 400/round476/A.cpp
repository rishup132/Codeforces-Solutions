#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int k,n,s,p;
    cin >> k >> n >> s >> p;

    n = (n+s-1)/s;

    cout << (k*n+p-1)/p << endl;
}