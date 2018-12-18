#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    int ans1,ans2;
    ans1 = ans2 = 0;

    for(int i=0;i<n/2;i++)
    {
        if(s[i] == '4' || s[i] == '7')
            ans1 += s[i]-'0';
        else
        {
            cout << "NO" << endl;
            return 0;
        }

        if(s[n/2+i] == '4' || s[n/2+i] == '7')
            ans2 += s[n/2+i]-'0';
        else
        {
            cout << "NO" << endl;
            return 0;
        }  
    }

    if(ans1 == ans2)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;
}