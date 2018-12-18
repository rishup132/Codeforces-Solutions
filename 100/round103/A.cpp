#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[100010],n;

main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    int m = *max_element(a,a+n);

    int ans = 0;

    for(int i=0;i<n;i++)
    {
        if(a[i] == m)
        {
            for(int j=i;j>0;j--)
                swap(a[j],a[j-1]);

            ans += i;
            break;
        }
    }

    m = *min_element(a,a+n);
    reverse(a,a+n);

    for(int i=0;i<n;i++)
    {
        if(a[i] == m)
        {
            for(int j=i;j>0;j--)
                swap(a[j],a[j-1]);

            ans += i;
            break;
        }
    }

    cout << ans << endl;
}