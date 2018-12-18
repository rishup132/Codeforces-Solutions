#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ll n,m;
    cin >> n >> m;

    double ans = 0;
    double c1,c2,x,y;
    c1 = c2 = 0;

    for(ll i=0;i<m;i++)
    {
        cin >> x >> y;
        ans += x;
        
        if(y >= 0)
            c1 += y;
        else
            c2 += y;
    }

    double ans1 = 0;

    ans1 += (n*(n-1)*c1/2);
    double temp = n/2;
    
    if(n%2 == 0)
    {
        ans1 += (temp*(temp+1)*c2/2);
        ans1 += (temp*(temp-1)*c2/2);
    }
    else
        ans1 += (temp*(temp+1)*c2);

    double an = ans1/n + ans;

    cout << fixed << setprecision(15) << an << endl;

    return 0;
}