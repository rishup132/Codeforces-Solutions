#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[110];

int main()
{
    int n,d;
    cin >> n >> d;

    for(int i=0;i<n;i++)
        cin >> a[i];

    int count = 2;

    for(int i=1;i<n;i++)
    {
        if(a[i]-a[i-1] == 2*d)
            count++;
        else if(a[i]-a[i-1] > 2*d)
            count += 2;
    }

    cout << count << endl;
}