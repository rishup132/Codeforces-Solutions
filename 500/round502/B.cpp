#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n;
    cin >> n;

    string s1,s2;
    cin >> s1 >> s2;

    int c1,c2,c3,c4;
    c4 = c1 = c2 = c3 = 0;

    for(int i=0;i<n;i++)
    {
        if(s1[i] == s2[i] && s1[i] == '0')
            c1++;
        else if(s1[i] == '1')
        {
            c2++;

            if(s2[i] == '0')
                c3++;
        }

        if(s1[i] == '0' && s2[i] == '1')
            c4++;
    }

    cout << c1*c2 + c3*c4 << endl;
}