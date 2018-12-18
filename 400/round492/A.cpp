#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int n;
    cin >> n;

    int ans = n/100 + (n%100)/20 + ((n%100)%20)/10 + (((n%100)%20)%10)/5 + (((n%100)%20)%10)%5;

    cout << ans << endl;
}