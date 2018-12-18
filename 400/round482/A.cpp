#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define pb push_back
#define mp make_pair

using namespace std;

int main()
{
    ll int n;
    cin >> n;

    n++;

    if(n == 1)
        cout << 0 << endl;
    else if(n%2 == 0)
        cout << n/2 << endl;
    else
        cout << n << endl;
}