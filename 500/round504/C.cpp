#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n,k;
    cin >> n >> k;

    string ss;
    cin >> ss;

    int c1,c2;
    c1 = c2 = k/2;

    string s = "";

    for(int i=0;i<n;i++)
    {
        if(c1 > 0)
        {
            s += ss[i];

            if(ss[i] == '(')
                c1--;
            else
                c2--;
        }
        else if(c2 > 0 && ss[i] == ')')
        {
            s += ss[i];
            c2--;
        }
    }

    cout << s << endl;
}