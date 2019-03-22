#include <bits/stdc++.h>

using namespace std;

bool is_palin(string s)
{
    int l = 0;
    int r = s.size()-1;

    while(l < r)
        if(s[l++] != s[r--])
            return false;
    
    return true;
}

int main()
{
    string s;
    cin >> s;

    set <char> sc;

    for(int i=0;i<s.size()/2;i++)
        sc.insert(s[i]);

    if(sc.size() == 1 || s.size() < 4)
    {
        cout << "Impossible\n";
        return 0;
    }

    int n = s.size();
    string ss = s;
    s += s;

    for(int i=0;i<n;i++)
    {
        string temp = "";
        int j = i;
        int count = n;

        while(count--)
            temp += s[j++];

        if(is_palin(temp) && temp != ss)
        {
            cout << 1 << " ";
            return 0;
        }
    }

    cout << 2 << endl;
}