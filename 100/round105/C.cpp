#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a,b;
    cin >> n >> a >> b;

    if(n == 1)
    {
        cout << 1 << endl;
        return 0;
    }

    if(a == n-1)
    {
        cout << -1 << endl;
        return 0;
    }

    n--;
    cout << 1 << " ";

    int add = 1;

    while(b--)
    {
        n--;
        cout << add+1 << " ";
        add += (add+1);
    }

    if(add == 1)
    {
        cout << 1 << " ";
        n--;
    }
    else
        add = add/2 + 1;

    while(a--)
    {
        n--;
        cout << add+1 << " ";
        add++;
    }

    while(n > 0)
    {
        cout << 1 << " ";
        n--;
    }
}