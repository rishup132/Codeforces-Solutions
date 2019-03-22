#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s1,s2;
    cin >> s1 >> s2;

    int a,b,c,d;
    a = b = c = d = 0;

    for(int i=0;i<s1.size();i++)
    {
        if(s1[i] == '0' && s2[i] == '0')
            a++;
        else if(s1[i] == '1' && s2[i] == '0')
            b++;
        else if(s1[i] == '0' && s2[i] == '1')
            c++;
        else
            d++;
    }

    for(int i=0;i<=b;i++)
    {
        for(int j=0;j<=c;j++)
        {
            int cnt1 = c + d - i - j;

            if(cnt1 >= 0 && cnt1%2 == 0)
            {
                cnt1 /= 2;
                int cnt2 = n/2 - i - j - cnt1;

                // cout << cnt2 << " " << i << " " << j << " " << cnt1 << endl;

                if(cnt2 >= 0 && cnt2 <= a && cnt1 <= d)
                {
                    for(int k=0;k<s1.size();k++)
                    {
                        if(s1[k] == '0' && s2[k] == '0' && cnt2 > 0)
                            cout << k+1 << " ", cnt2--;
                        else if(s1[k] == '1' && s2[k] == '0' && i > 0)
                            cout << k+1 << " ", i--;
                        else if(s1[k] == '0' && s2[k] == '1' && j > 0)
                            cout << k+1 << " ", j--;
                        else if(s1[k] == '1' && s2[k] == '1' && cnt1 > 0)
                            cout << k+1 << " ", cnt1--;
                    }

                    return 0;
                }
            }
        }
    }

    cout << -1 << endl;
}