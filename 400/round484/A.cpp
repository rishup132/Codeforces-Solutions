#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;
    
    string s;
    cin >> s;

    for(int i=1;i<n;i++)
    {
        if(s[i] == '1' && s[i-1] == '1')
        {
            cout << "No" << endl;
            return 0;
        }
    }
    
    s = '0' +s + '0';
    
    for(int i=1;i<=n;i++)
    {
        if(s[i-1] == '0' &&  s[i] == '0' && s[i+1] == '0')
        {
            cout << "No" << endl;
            return 0;
        }
    }
    
    cout << "Yes" << endl;
}