#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    string s;
    cin >> s;

    int c1 = 0,c2 = 0;
    string v = "";

    for(int i=s.size()-1;i>=0;i--)
    {
        if(s[i] == '0')
            c2++;
        else if(s[i] == '1')
            c1++;
        else
        {
            while(c2--)
                v += '0';
            v += '2';
            c2 = 0;
        }
    }

    while(c1--)
        v += '1';
    
    while(c2--)
        v += '0';

    reverse(v.begin(),v.end());

    cout << v << endl;

    return 0;
}