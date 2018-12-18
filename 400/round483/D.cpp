#include <bits/stdc++.h>

using namespace std;

int a[5050][5050],b[5050][5050];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> a[0][i];
        b[0][i] = a[0][i];
    }

    for(int i=1;i<n;i++)
    {
        for(int j=0;j<(n-i);j++)
        {
            a[i][j] = max(b[i-1][j]^b[i-1][j+1],max(a[i-1][j],a[i-1][j+1]));
            b[i][j] = b[i-1][j]^b[i-1][j+1];
        }
    }

    /*for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout << a[i][j] << " ";
        cout << endl;
    }
    cout << endl;*/

    int q;
    cin >> q;

    while(q--)
    {
        int x,y;
        cin >> x >> y;

        cout << a[abs(x-y)][min(x-1,y-1)] << endl;
    }
}