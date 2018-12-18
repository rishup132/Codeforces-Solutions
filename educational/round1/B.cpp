#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s;
    cin >> s;

    int m;
    cin >> m;

    while(m--)
    {
        int x,y,k;
        cin >> x >> y >> k;
        x--;
        y--;

        k %= (y-x+1);

        string t = "";

        for(int i=0;i<x;i++)
            t += s[i];

        int temp = y-x+1-k;

        for(int i=y-k+1;k>0;k--,i++)
            t += s[i];

        for(int i=x;temp>0;temp--,i++)
            t += s[i];

        for(int i=y+1;i<s.size();i++)
            t += s[i];

        s = t;

        //cout << s << endl;
    }

    cout << s << endl;
}