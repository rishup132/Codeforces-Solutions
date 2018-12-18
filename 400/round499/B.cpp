#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[110];

main()
{
    int n,m;
    cin >> n >> m;

    memset(a,0,110*sizeof(a[0]));

    int x;

    for(int i=0;i<m;i++)
    {
        cin >> x;
        a[x]++;
    }

    int i;

    for(i=1;i<=100;i++)
    {
        int cnt = 0;

        for(int j=0;j<=100;j++)
            cnt += (a[j]/i);

        if(cnt < n)
            break;
    }

    cout << i-1 << endl;
}