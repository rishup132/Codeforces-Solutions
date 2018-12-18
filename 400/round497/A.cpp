#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    string s;
    cin >> s;

    s += 'z';
    bool flag = false;

    for(int i=0;i<s.size()-1;i++)
    {
        if(s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' && s[i] != 'u' && s[i] != 'n')
        {
            if(s[i+1] != 'a' && s[i+1] != 'e' && s[i+1] != 'i' && s[i+1] != 'o' && s[i+1] != 'u')
                flag = true;
        }
    }

    if(flag)
        cout << "NO" << endl;
    else
        cout << "YES" << endl;
}