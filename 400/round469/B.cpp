#include <bits/stdc++.h>

#define ll long long

using namespace std;

ll a[200010],b[200010];

int main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=1;i<n;i++)
        a[i] += a[i-1];

    for(int i=0;i<m;i++)
        cin >> b[i];

    int count = 0;

    for(int i=1;i<m;i++)
        b[i] += b[i-1];

    for(int i=0;i<m;i++)
    {
        if(binary_search(a,a+n,b[i]))
            count++;
    }

    cout << count << endl;
}