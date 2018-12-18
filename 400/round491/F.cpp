#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define first fi
#define second se
#define all(x) x.begin(),x.end()

using namespace std;

int main()
{
    ll n;
    cin >> n;

    int t = 0;
    ll temp = n;

    while(temp)
    {
        temp /= 10;
        t++;
    }

    if(n == 10e4)
        cout << "10^4" << endl;
    else if(n == 10e5)
        cout << "10^5" << endl;
    else if(n == 10e6)
        cout << "10^6" << endl;
    else if(n == 10e7)
        cout << "10^7" << endl;
    else if(n == 10e8)
        cout << "10^8" << endl;
    else if(n == 10e9)
        cout << "10^9" << endl;
    else if(n == 10e10)
        cout << "10^10" << endl;
    else if(n < 10e6)
        cout << n << endl;
    else if(n > 10e6 && (n-10e6) < 10)
    {
        temp = n/10;
        cout << "10e6+" << temp < endl;
    }
    else if(n > )
}