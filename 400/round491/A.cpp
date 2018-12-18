#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define first fi
#define second se
#define all(x) x.begin(),x.end()

using namespace std;

int main()
{
    int a,b,c,n;
    cin >> a >> b >> c >> n;

    if(a < c)
        cout << -1 << endl;
    else if(b < c)
        cout << -1 << endl;
    else
    {
        a -= c;
        b -= c;
        a = a+b+c;
        if(a >= n)
            cout << -1 << endl;
        else
            cout << n-a << endl;
    }
}