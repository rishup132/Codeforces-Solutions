#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n,m;
    cin >> n >> m;

    string s1,s2;
    cin >> s1 >> s2;

    int i = n;

    for(i=0;i<n;i++)
    {
        if(s1[i] == '*')
            break;
    }

    if(i == n)
    {
        if(s1 == s2)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;

        return 0;
    }

    if(n-1 > m)
    {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = true;

    for(int j=0;j<i;j++)
    {
        if(s1[j] != s2[j])
        {
            flag = false;
            break;
        }
    }

    reverse(s1.begin(),s1.end());
    reverse(s2.begin(),s2.end());

    for(i=0;i<n;i++)
    {
        if(s1[i] == '*')
            break;
    }

    for(int j=0;j<i;j++)
    {
        if(s1[j] != s2[j])
        {
            flag = false;
            break;
        }
    }

    if(flag)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}