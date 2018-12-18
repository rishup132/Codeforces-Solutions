#include<bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll int a[100010];

int main()
{
    ll int n,x,y;
    cin >> n >> x >> y;

    ll int tape;
    cin >> tape;

    ll int sum = tape;

    for(int i=0;i<n-1;i++)
    {
        cin >> a[i];
        sum += a[i];
    }

    if(n == 1)
    {
        cout << 0 << endl;
        return 0;
    }

    ll int ans = tape*x;

    sort(a,a+n-1,greater<int>());

    ll int count = 0;

    while(ans < y*sum)
    {
        sum -= a[count];
        count++;
    }

    cout << count << endl;
}
