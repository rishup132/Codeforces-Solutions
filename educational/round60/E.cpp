#include <bits/stdc++.h>

using namespace std;

int32_t main()
{
    string s;
    cin >> s;

    reverse(s.begin(),s.end());

    cout << "? " << s << endl;
    
    cin >> s;

    if(s == "0")
        return 0;

    reverse(s.begin(),s.end());

    cout << "! " << s << endl;

    return 0;
}