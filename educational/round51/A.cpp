#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    string a,b,c;
    a = "0123456789";
    b = "abcdefghijklmnopqrstuvwxyz";
    c = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    while(t--)
    {
        string s;
        cin >> s;

        bool f1,f2,f3;
        f1 = f2 = f3 = false;

        for(int i=0;i<s.size();i++)
        {
            if(a.find(s[i]) != a.npos)
                f1 = true;
            if(b.find(s[i]) != b.npos)
                f2 = true;
            if(c.find(s[i]) != c.npos)
                f3 = true;   
        }

        if(f1 && f2 && f3)
        {
            cout << s << endl;
        }
        else if(f1 && f2)
        {
            for(int i=1;i<s.size();i++)
            {
                if((a.find(s[i-1]) != a.npos && b.find(s[i]) != b.npos) || 
                    (a.find(s[i]) != a.npos && b.find(s[i-1]) != b.npos))
                {
                    if(i == 1)
                    {
                        s[i+1] = 'A';
                        break;
                    }
                    else
                    {
                        s[i-2] = 'A';
                        break;
                    }
                }
            }

            cout << s << endl;
        }
        else if(f1 && f3)
        {
            for(int i=1;i<s.size();i++)
            {
                if((a.find(s[i-1]) != a.npos && c.find(s[i]) != c.npos) ||
                     (a.find(s[i]) != a.npos && c.find(s[i-1]) != c.npos))
                {
                    if(i == 1)
                    {
                        s[i+1] = 'a';
                        break;
                    }
                    else
                    {
                        s[i-2] = 'a';
                        break;
                    }
                }
            }

            cout << s << endl;
        }
        else if(f2 && f3)
        {
            for(int i=1;i<s.size();i++)
            {
                if((c.find(s[i-1]) != c.npos && b.find(s[i]) != b.npos) || 
                    (c.find(s[i]) != c.npos && b.find(s[i-1]) != b.npos))
                {
                    if(i == 1)
                    {
                        s[i+1] = '0';
                        break;
                    }
                    else
                    {
                        s[i-2] = '0';
                        break;
                    }
                }
            }

            cout << s << endl;
        }
        else if(f1)
        {
            s[0] = 'a';
            s[1] = 'A';

            cout << s << endl;
        }
        else if(f2)
        {
            s[0] = '0';
            s[1] = 'A';

            cout << s << endl;
        }
        else
        {
            s[0] = '0';
            s[1] = 'a';

            cout << s << endl;
        }
    }
}