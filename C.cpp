#include <bits/stdc++.h>

using namespace std;

pair<int,int> p[200010];

map<char,int> m;

set <pair<int,char> > s1;

int a[200010],b[200010];

int main()
{
    string s,p;
    cin >> s >> p;

    for(int i=0;i<p.size();i++)
    {
        m[p[i]]++;
        b[i] = 0;
    }

    int n = s.size();

    for(int i=n-1;i>=0;i--)
        cin >> a[i];

    int count = 0;

    for(int i=0;i<n;i++)
    {
        if(m[s[a[i]-1]] != 0)
        {
            count++;

            b[i] = a[i];

            if(count >= p.size())
            {
                for(int j=1;j<p.size();j++)
                {
                    if(b[j] <= b[j-1])
                    {
                        flag = false;
                        break;
                    }
                }
            }
        }

        if(flag)
        {
            cout << n-i-1 << endl;
            return 0;
        }
    }
}