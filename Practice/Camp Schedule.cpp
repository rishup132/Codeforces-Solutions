#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s1,s2;
    cin >> s1 >> s2;

    int cnt1,cnt2;
    cnt1 = cnt2 = 0;

    for(char i:s1)
    {
        if(i == '0')
            cnt1++;
        else
            cnt2++;
    }

    
}