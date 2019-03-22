#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[1000];
int b[1000];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    sort(a,a+n);

    vector <int> v1,v;

    for(int i=0;i<n;i++)
    {
        if(i%2 == 0)
            v.push_back(a[i]);
        else
            v1.push_back(a[i]);
    }

    reverse(v1.begin(),v1.end());

    for(int i:v)
        cout << i << " ";

    for(int i:v1)
        cout << i << " ";
}