#include <bits/stdc++.h>

#define int long long

using namespace std;

bool check(char i)
{
    if(i == 'a' || i == 'e' || i == 'i' || i == 'o' || i == 'u')
        return true;
    else
        return false;
}

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    string s1,s2;
    cin >> s1 >> s2;

    if(s1.size() != s2.size())
    {
        cout << "No" << endl;
        return 0;
    }

    for(int i=0;i<s1.size();i++)
    {
        if(check(s1[i]) != check(s2[i]))
        {
            cout << "No" << endl;
            return 0;
        }
    }

    cout << "Yes" << endl;
}