#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

int a[1000];

int main()
{
    int n;
    cin >> n;

    for(int i=1;i<=1000;i++)
        a[i] = i*i;

    int temp = lower_bound(a+1,a+1000,n)-a;

    int j = n/temp;
    int k = n%temp;
    int l = temp;

    while(j--)
    {
        int x = l;
        int y = temp;
        while(y--)
            cout << x-- << " ";
        l += temp;
    }

    l -= (temp-k);

    while(k--)
        cout << l-- << " ";

    cout << endl;
}