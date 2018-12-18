#include <bits/stdc++.h>

using namespace std;

int main()
{
    int l,r,a;
    cin >> l >> r >> a;

    int t = abs(l-r);

    if(t > a)
    {
        cout << 2*(min(l,r)+a) << endl;
    }
    else
    {
        a = (a-t)/2;
        a = 2*a;
        cout << 2*max(l,r)+a << endl;
    }
}