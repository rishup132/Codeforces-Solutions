#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[100010];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int b,k;
    cin >> b >> k;

    int ev = 0;

    for(int i=0;i<k;i++)
    {
        cin >> a[i];

        if(a[i]%2 == 0)
            ev++;
    }

    if(b%2 == 0)
    {
        if(a[k-1]%2)
            cout << "odd\n";
        else
            cout << "even\n";
    }
    else
    {
        k -= ev;

        if(k%2)
            cout << "odd\n";
        else
            cout << "even\n";
    }
}