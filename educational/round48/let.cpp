#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,t;
    cin >> n >> t;

    string s1,s2;
    cin >> s1 >> s2;

    int c1,c2;
    c1 = c2 = 0;

    for(int i=0;i<n;i++)
    {
        if(s1[i] == s2[i])
            c1++;
        else
            c2++;
    }

    int min = c2%2 == 0 ? c2/2 : c2/2+1;

    if(t < min)
    {
        cout << -1 << endl;
        return 0;
    }

    //cout << t << c1 << c2 << endl;

    if(t >= c2)
    {
        string ans = "";
        t -= c2;
        c1 -= t;

        for(int i=0;i<n;i++)
        {
            if(c1 > 0 && s1[i] == s2[i])
            {
                ans += s1[i];
                c1--;
            }
            else
            {
                map <char,int> m;
                m[s1[i]]++;
                m[s2[i]]++;

                for(char x='a';x <= 'z';x++)
                {
                    if(m[x] == 0)
                    {
                        ans += x;
                        break;
                    }
                }
            }
        }

        cout << ans << endl;

        return 0;
    }

    int t1,t2;

    t1 = c2/2;
    c2 = c2 - t1*2;
    t -= min;
    t1 -= t;
    t2 = t1;
    c2 += 2*t;

    string ans = "";

    for(int i=0;i<n;i++)
    {
        if(s1[i] == s2[i])
            ans += s1[i];
        else
        {
            if(t1 > 0)
            {
                ans += s1[i];
                t1--;
            }
            else if(t2 > 0)
            {
                ans += s2[i];
                t2--;
            }
            else
            {
                map <char,int> m;
                m[s1[i]]++;
                m[s2[i]]++;

                for(char x='a';x <= 'z';x++)
                {
                    if(m[x] == 0)
                    {
                        ans += x;
                        break;
                    }
                }
            }
        }
    }

    cout << ans << endl;
}