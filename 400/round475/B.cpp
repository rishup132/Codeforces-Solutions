#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int n,a,b,c,t,x;
    cin >> n >> a >> b >> c >> t;

    if(b > c)
        c = 0;
    else
        c -= b;

    int sum = 0;

    for(int i=0;i<n;i++)
    {
        cin >> x;
        sum += (a +(t-x)*c);
    }

    cout << sum << endl;
}