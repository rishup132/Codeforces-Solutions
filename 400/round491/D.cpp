#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007
#define first fi
#define second se
#define all(x) x.begin(),x.end()

using namespace std;

int main()
{
    string s1,s2;
    cin >> s1 >> s2;

    s1 += "XX";
    s2 += "XX";

    int count = 0;

    for(int i=0;i<s1.size()-2;i++)
    {
        int t = 0;

        if(s1[i] == '0')
            t++;
        if(s2[i] == '0')
            t++;
        if(s1[i+1] == '0')
            t++;
        if(s2[i+1] == '0')
            t++;

        if(t == 4)
        {
            if(s1[i+2] == '0')
                t++;
            if(s2[i+2] == '0')
                t++;

            if(t == 6)
            {
                count++;
                i++;
            }
            
            count++;
            i++;
        }
        else if(t == 3)
        {
            count++;
            i++;
        }
    }

    cout << count << endl;
}