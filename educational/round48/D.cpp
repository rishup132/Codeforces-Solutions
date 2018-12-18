#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

int a[110],b[110];
int s[110][110];

int main()
{
    int n,m;
    cin >> n >> m;

    int s1,s2;
    s1 = s2 = 0;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        s1 ^= a[i];
    }
    
    for(int i=0;i<m;i++)
    {
        cin >> b[i];
        s2 ^= b[i];
    }

    if(s1 != s2)
    {
        cout << "NO" << endl;
        return 0;
    }

    cout << "YES" << endl;

    for(int i=0,k=0;i<n-1;i++)
    {
        int temp = 0;

        for(int j=0;j<m-1;j++)
        {
            s[i][j] = ++k;
            temp ^= s[i][j];
        }

        s[i][m-1] = temp^a[i];
    }

    for(int i=0;i<m;i++)
    {
        int temp = 0;

        for(int j=0;j<n-1;j++)
            temp ^= s[j][i];

        s[n-1][i] = temp^b[i];
    }

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cout << s[i][j] << " ";
        cout << endl;
    }
}
