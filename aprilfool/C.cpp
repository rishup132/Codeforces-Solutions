#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[1000];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    while(n)
    {
        for(int i=1;i<n;i++)
        {
            if(abs(a[i]-a[i-1]) >= 2)
            {
                cout << "NO" << endl;
                return 0;
            }
        }

        int ma = 0;
        int ans = -1;

        for(int i=0;i<n;i++)
        {
            if(ma < a[i])
            {
                ma = a[i];
                ans = i;
            }
        }

        n--;

        for(int i=ans;i<n;i++)
            a[i] = a[i+1];
    }

    cout << "YES" << endl;
}