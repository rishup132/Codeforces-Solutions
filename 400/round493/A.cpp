#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[100];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    if(n == 1)
    {
        cout << -1 << endl;
        return 0;
    }

    if(n == 2 && a[0] == a[1])
    {
        cout << -1 << endl;
        return 0;
    }

    int ans = 10000000;
    int ind = 0;

    for(int i=0;i<n;i++)
    {
        if(a[i] < ans)
        {
            ans = a[i];
            ind = i+1;
        }
    }

    cout << 1 << endl;
    cout << ind << endl;
}