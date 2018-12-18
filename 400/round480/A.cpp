#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

int main()
{
    string s;
    cin >> s;

    int x,y;
    x = y = 0;

    for(int i=0;i<s.size();i++)
    {
        if(s[i] == '-')
            x++;
        else
            y++;
    }

    if(y < 2 || x == 0)
        cout << "YES" << endl;
    else
    {
        if(x%y == 0)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
}