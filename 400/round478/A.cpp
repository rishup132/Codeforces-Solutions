#include<bits/stdc++.h>

#define ll long long
#define mod 998244353

using namespace std;

int main()
{
    int n;
    cin >> n;

    map <string,int> m;

    for(int i=0;i<n;i++)
    {
        string s;
        cin >> s;

        sort(s.begin(),s.end());

        string temp;
        temp.push_back(s[0]);
        int k = 1;

        while(k < s.size())
        {
            if(s[k-1] != s[k])
                temp.push_back(s[k]);
            k++;
        }

        if(m[temp] == 0)
            m[temp]++;
    }

    cout << m.size() << endl;
}