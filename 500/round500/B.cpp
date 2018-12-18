#include <bits/stdc++.h>

#define int long long int
#define mod 1000000007

using namespace std;

int a[200010];
map <int,int> m;

main()
{
    int n,x;
    cin >> n >> x;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        m[a[i]]++;
    }

    sort(a,a+n);

    for(int i=1;i<n;i++)
    {
        if(a[i] == a[i-1])
        {
            cout << 0 << endl;
            return 0;
        }
    }

    for(int i=0;i<n;i++)
    {
        m.erase(a[i]);
        int temp = a[i]&x;

        if(m[temp] != 0)
        {
            cout << 1 << endl;
            return 0;
        }

        m[a[i]]++;
    }

    for(int i=0;i<n;i++)
        a[i] = a[i]&x;

    sort(a,a+n);

    for(int i=1;i<n;i++)
    {
        if(a[i] == a[i-1])
        {
            cout << 2 << endl;
            return 0;
        }
    }

    cout << -1 << endl;
}