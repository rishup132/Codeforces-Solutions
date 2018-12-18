#include <bits/stdc++.h>

#define int long long int
#define mod 1000000007

using namespace std;

int a[1000],b[1000];

main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<n;i++)
        cin >> b[i];

    int s1,s2;
    s1 = s2 = 0;

    for(int i=0;i<n;i++)
    {
        s1 += a[i];
        s2 += b[i];
    }

    if(s1 >= s2)
        cout << "Yes\n";
    else
        cout << "No\n";
}