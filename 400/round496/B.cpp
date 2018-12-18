#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    string s,v;
    cin >> s >> v;

    reverse(s.begin(),s.end());
    reverse(v.begin(),v.end());

    int n = min(s.size(),v.size());

    for(int i=0;i<n;i++)
    {
        if(s[i] != v[i])
        {
            cout << s.size()+v.size()-2*i << endl;
            return 0;
        }
    }

    cout << s.size()+v.size()-2*n << endl;
}