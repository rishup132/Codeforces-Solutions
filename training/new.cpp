#include <bits/stdc++.h>

using namespace std;

map <string, pair<int,string> > m;

int main()
{
    int t;
    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        map <string,int> m1;

        string s1;

        for(int i=0;i<s.size();i++)
        {
            s1 = "";

            for(int j=i;j<s.size();j++)
            {
                s1 += s[j];
                
                if(m1[s1] == 0)
                {
                    m1[s1]++;
                    m[s1].first++;
                    m[s1].second = s;
                }
            }
        }
    }

    cin >> t;

    while(t--)
    {
        string s;
        cin >> s;

        if(m[s].first == 0)
            m[s].second = "-";

        cout << m[s].first << " " << m[s].second << endl;
    }
}