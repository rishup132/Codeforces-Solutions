#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int id = n-1;

    for(int i=0;i<n-1;i++)
    {
        if(s[i] > s[i+1])
        {
            id = i;
            break;
        }
    }

    for(int i=0;i<n;i++)
    {
        if(i != id)
            cout << s[i];
    }
    cout << endl;
}