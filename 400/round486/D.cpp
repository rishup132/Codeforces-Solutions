#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll a[200010];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    ll t1,t2,t3,k,j;

    for(int i=0;i<n;i++)
    {
        t1 = a[i];
        k = 32;
        j = 1;

        while(k--)
        {
            t2 = t1+j;
            t3 = t2+j;

            if(binary_search(a,a+n,t2) && binary_search(a,a+n,t3))
            {
                cout << 3 << endl;
                cout << t1 << " " << t2 << " " << t3 << endl;
                return 0;
            }

            j *= 2;
        }
    }

    for(int i=0;i<n;i++)
    {
        t1 = a[i];
        k = 32;
        j = 1;

        while(k--)
        {
            t2 = t1+j;

            if(binary_search(a,a+n,t2))
            {
                cout << 2 << endl;
                cout << t1 << " " << t2 << endl;
                return 0;
            }

            j *= 2;
        }
    }

    cout << 1 << endl;
    cout << a[0] << endl;

    return 0;
}