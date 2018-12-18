#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[100010];

main()
{
    int n,x;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        a[i] = 0;
        int j = 4;

        while(j--)
        {
            cin >> x;
            a[i]+=x;
        }
    }

    int temp = a[0];

    sort(a,a+n,greater<int> ());

    int ans = n;

    for(int i=0;i<n;i++)
    {
        if(a[i] == temp)
        {
            ans = i+1;
            break;
        }
    }

    cout << ans << endl;
}