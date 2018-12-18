#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[500010],b[500010];

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin >> n;

    int sum1,sum2;
    sum1 = sum2 = 0;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        sum1 += a[i];
    }
    
    cin >> m;

    for(int i=0;i<m;i++)
    {
        cin >> b[i];
        sum2 += b[i];
    }

    int l1 = 1;
    int l2 = 1;

    int c1,c2;
    c1 = a[0];
    c2 = b[0];

    if(sum1 != sum2)
    {
        cout << -1 << endl;
        return 0;
    }

    int count = 1;

    while(l1 < n && l2 < m)
    {
        if(c1 == c2)
        {
            count++;
            c1 = a[l1++];
            c2 = b[l2++];
        }
        else if(c1 > c2)
            c2 += b[l2++];
        else
            c1 += a[l1++];
    }

    cout << count << endl;
}