#include <bits/stdc++.h>

using namespace std;

int a[200010];

int main()
{
    int n,k,temp;
    cin >> n >> k;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    if(k == 0)
    {
        if(a[0] == 1)
            cout << -1 << endl;
        else
            cout << 1 << endl;
    }
    else if(k == n)
        cout << a[k-1] << endl;
    else
    {
        if(a[k-1] == a[k])
            cout << -1 << endl;
        else
            cout << a[k]-1 << endl;
    }
}