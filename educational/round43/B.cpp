#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    ll int n,m,k;
    cin >> n >> m >> k;

    ll int temp1,temp2;

    if(k < n)
    {
        cout << k+1 << " " << 1 << endl;
    }
    else
    {
        k = k-n+1;
        temp1 = k/(m-1);
        temp2 = k%(m-1);

        if(temp2 == 0)
        {
            if(temp1%2)
                cout << n-temp1+1 << " " << m << endl;
            else
                cout << n-temp1+1 << " " << 2 << endl;
        }
        else
        {
            if(temp1%2)
                cout << n-temp1 << " " << m-temp2+1 << endl;
            else
                cout << n-temp1 << " " << temp2+1 << endl;
        }

    }
}