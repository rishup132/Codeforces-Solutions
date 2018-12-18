#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[500010];

int main()
{
    int n,k,d;
    cin >> n >> k >> d;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    for(int i=n-1;i>0;i--)
        a[i] -= a[i-1];

    a[0] = a[n] = d+1;

    int counter = 0;
    int temp;
    bool flag = false;

    for(int i=1;i<=n;i++)
    {
        if(a[i] > d)
        {
            temp = i-counter;

            if(temp < k)
            {
                flag = true;
                break;
            }

            counter = i;
        }
    }

    if(flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}