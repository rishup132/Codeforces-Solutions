#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    string s;
    cin >> s;

    int ans = 0;

    for(int i=0;i<s.size()-1;i++)
    {
        for(int j=i+1;j<s.size();j++)
        {
            bool flag = false;
            int temp1,temp2;
            temp1 = i;
            temp2 = j;

            while(temp2 > temp1)
            {
                if(s[temp1] != s[temp2])
                {
                    flag = true;
                    break;
                }
                temp1++;
                temp2--;
            }

            if(flag && ans < (j-i+1))
                ans = j-i+1;
        }
    }

    cout << ans << endl;
}