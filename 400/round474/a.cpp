#include <bits/stdc++.h>

#define ll long long

using namespace std;

vector <pair<int,int> > v;

int a[1010],b[1010];

int main()
{
    int n,k1,k2;
    cin >> n >> k1 >> k2;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<n;i++)
        cin >> b[i];

    for(int i=0;i<n;i++)
        a[i] = abs(a[i]-b[i]);

    sort(a,a+n,greater<int>());

    k1 += k2;

    ll int ans = 0;

    for(int i=0;i<n;i++)
        ans += a[i]*a[i];

    for(int i=1;i<n;i++)
    {
        int temp = a[i-1] - a[i];

        if(k1 >= i*temp)
        {
            k1 -= i*temp;
            ans -= i*a[i-1]*a[i-1];
            ans += i*a[i]*a[i];
        }
        else
        {
            int temp2 = k1/i;

            ans -= (k1%i)*a[i-1]*a[i-1];
            ans += (k1%i)*(a[i-1]-temp2-1)*(a[i-1]-temp2-1);
            ans -= (i - k1%i)*a[i]*a[i];
            ans += (i - k1%i)*(a[i]-temp2)*(a[i]-temp2);

            break;
        }
    }

    cout << ans << endl;
}