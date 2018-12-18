#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[200010];

int main()
{
    int n,k;
    cin >> n >> k;

    int i,count = 0;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(i=0;i<n;i++)
    {
        if(a[i] > k)
            break;
        count++;
    }

    for(int j=n-1;j>=i;j--)
    {
        if(a[j] > k)
            break;
        count++;
    }

    cout << count << endl;
    return 0;
} 