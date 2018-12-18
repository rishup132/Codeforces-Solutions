#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[100010],c[100010];

int main()
{
    int n,m;
    cin >> n >> m;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<m;i++)
        cin >> c[i];

    int count,temp;
    count = temp = 0;

    for(int i=0;i<n;i++)
    {
        if(a[i] <= c[temp])
        {
            count++;
            temp++;
        }
    }

    cout << count << endl;
    return 0;
}