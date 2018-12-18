#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    map<string,string> m;

    m["purple"] = "Power";
    m["green"] = "Time" ;
    m["blue"] = "Space" ;
    m["orange"] = "Soul" ;
    m["red"] = "Reality" ;
    m["yellow"] = "Mind" ;

    int n;
    cin >> n;

    cout << 6-n << endl;
    
    string s;

    while(n--)
    {
        cin >> s;
        m[s] = "";
    }

    map<string,string> :: iterator it;

    for(it=m.begin();it!=m.end();it++)
    {
        if(it->second != "")
            cout << it->second << endl;
    }

    return 0;
}