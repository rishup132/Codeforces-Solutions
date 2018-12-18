#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

string s[2010];
int b[2010];

int main()
{
    int n,m;
    cin >> n >> m;

    memset(b,0,1010*sizeof(b[0]));

    for(int i=0;i<n;i++)
    {
        cin >> s[i];

        for(int j=0;j<m;j++)
            s[i][j] == '1' ? b[j]++ : b[j];
    }

    sort(s,s+n);

    bool flag;

    for(int i=0;i<n;i++)
    {
        flag = true;

        for(int j=0;j<m;j++)
        {
            if(s[i][j] == '1' && b[j] < 2)
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            cout << "YES" << endl;
            return 0;
        }
    }

    cout << "NO" << endl;
    return 0;
}