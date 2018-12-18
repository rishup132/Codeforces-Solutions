#include <bits/stdc++.h>

using namespace std;

int a[100010],b[100010];

int main()
{
    freopen("o1.txt","r",stdin);

    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];
    
    freopen("o2.txt","r",stdin);

    cin >> n;

    for(int i=0;i<n;i++)
        cin >> b[i];

    freopen("o3.txt","w",stdout);

    for(int i=0;i<n;i++)
    {
        if(a[i] != b[i])
            cout << i+1 << endl;
    }
}