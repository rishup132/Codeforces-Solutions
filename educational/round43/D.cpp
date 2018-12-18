#include <bits/stdc++.h>

using namespace std;

int a[100010];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    int node = a[n-1]+1;

    int sum = 0;

    for(int i=0;i<n;i++)
        sum += a[i];

    node -= n;

    sum += node*a[0];
}