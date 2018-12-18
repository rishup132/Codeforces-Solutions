#include<bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[200010];

int main()
{
    int n;
    cin >> n;

    cin >> a[0];

    for(int i=1;i<n;i++)
    {
        cin >> a[i];

        a[i] += a[i-1];
    }

    for(int i=0;i<n;i++)
    {
        if(a[i] >= ceil(a[n-1]/2.0))
        {
            cout << i+1 << endl;
            return 0;
        }
    }
}