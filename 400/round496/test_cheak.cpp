#include <bits/stdc++.h>

using namespace std;

int a[1000000],b[1000000];

int main()
{
    freopen("out1.txt","r",stdin);
    int t;
    cin >> t;

    for(int i=0;i<t;i++)
        cin >> a[i];

    freopen("out2.txt","r",stdin);
    cin >> t;

    for(int i=0;i<t;i++)
        cin >> b[i];

    freopen("result.txt","w",stdout);

    for(int i=0;i<t;i++)
        if(a[i] != b[i])
            cout << i << endl;
}