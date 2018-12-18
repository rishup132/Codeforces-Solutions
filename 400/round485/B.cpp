#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ll int x,y;
    cin >> x >> y;

    double temp1,temp2;

    temp1 = x*log10(y);
    temp2 = y*log10(x);

    if(temp1 > temp2)
        cout << "<" << endl;
    else if(temp1 < temp2)
        cout << ">" << endl;
    else
        cout << "=" << endl;
}