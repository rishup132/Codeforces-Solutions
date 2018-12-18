#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    int id = -1;

    for(int i=1;i<s.size();i++)
    {
        bool flag = true;

        for(int j=0;j<s.size()-i;j++)
        {
            if(s[i+j] != s[j])
            {
                flag = false;
                break;
            }
        }

        if(flag)
        {
            id = i;
            break;
        }
    }

    //cout << id << endl;

    string t = "";

    if(id == -1)
    {
        for(int i=0;i<k;i++)
            t += s;
        
        cout << t << endl;

        return 0;
    }

    string t1 = "";

    for(int i=id;i<s.size();i++)
        t1 += s[i];

    for(int i=t1.size();i<s.size();i++)
        t += s[i];

    string ans = t1;

    while(k--)
        ans += t;

    cout << ans << endl;
}