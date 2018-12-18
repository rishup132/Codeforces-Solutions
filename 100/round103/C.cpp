#include <bits/stdc++.h>

using namespace std;

int main()
{
    string s,t;
    cin >> s >> t;

    int a[256],b[256],c[256];

    memset(a,0,256*sizeof(a[0]));
    memset(b,0,256*sizeof(b[0]));
    memset(c,0,256*sizeof(c[0]));

    for(auto i:t)
        a[i-'a']++;

    int l = 0;

    for(int i=0;i<t.size()-1;i++)
        b[s[i]-'a']++;

    int count = 0;

    for(int i=t.size()-1;i<s.size();i++)
    {
        b[s[i]-'a']++;

        bool flag = true;

        for(int j=0;j<30;j++)
        {
            if(a[j] < b[j])
            {
                flag = false;
                break;
            }
        }

        if(flag)
            count++;

        b[s[i-t.size()+1]-'a']--;
    }

    cout << count << endl;
}