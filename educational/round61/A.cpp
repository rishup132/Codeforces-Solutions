#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int a[4];

    for(int i=0;i<4;i++)
        cin >> a[i];

    if(a[2] > 0)
    {
        if(a[0] > 0 && a[3] > 0 && a[0] == a[3])
            cout << 1 << endl;
        else
            cout << 0 << endl;
    }
    else if(a[0] == a[3])
        cout << 1 << endl;
    else
        cout << 0 << endl;
}