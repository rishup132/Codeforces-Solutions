#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;

    if(n > m)
        swap(n,m);

    if(n == 1)
    {
        cout << m << endl;
        return 0;
    }
    else if(n == 2)
    {
        int ans = 0;

        if(m%4 == 1)
            ans = 2;
        else if(m%4 == 2)
            ans = 4;

        cout << 4*((m+1)/4) + ans << endl;
        return 0;
    }

    cout << n*m - (n*m)/2 << endl;
}