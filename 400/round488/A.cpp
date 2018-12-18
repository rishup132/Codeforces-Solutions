#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[100];
int b[100];

int main()
{
    int n,m,x;
    cin >> n >> m;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<11;i++)
        b[i] = 0;

    for(int i=0;i<m;i++)
    {
        cin >> x;
        b[x] = 1;
    }

    for(int i=0;i<n;i++)
    {
        if(b[a[i]] == 1)
            cout << a[i] << " ";
    }
    cout << endl;
}