#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    ll n,x,y;
    cin >> n >> x >> y;

    string s;
    cin >> s;

    s += '1';

    ll count = 0;
    ll count1 = 0;

    for(int i=0;i<=n;i++)
    {
        if(s[i] == '0')
            count++;
        else
        {
            if(count != 0)
                count1++;
            count = 0;
        }
    }

    if(count1 == 0)
        cout << 0 << endl;
    else if(y <= x)
        cout << y*count1 << endl;
    else
        cout << x*(count1-1) + y << endl;
}