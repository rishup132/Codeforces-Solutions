#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll n;
    cin >> n;

    ll a[11] = {4, 10, 20, 35, 56, 83, 116, 155, 198, 244, 292};

    if(n < 12)
        cout << a[n-1] << endl;
    else
        cout << a[10] + 49*(n-11) << endl;
}