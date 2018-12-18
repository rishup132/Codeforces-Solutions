#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

map <char,int> m;

int main()
{
    int n,k;
    cin >> n >> k;

    string s;
    cin >> s;

    for(int i=0;i<s.size();i++)
        m[s[i]]++;

    char ch = 'a';
    
    for(int i=0;i<26;i++)
    {
        int temp = min(k,m[ch]);
        k -= temp;
        m[ch] -= temp;

        ch++;
    }

    string s1 = "";

    for(int i=s.size()-1;i>=0;i--)
    {
        if(m[s[i]] == 0)
            continue;
        s1 += s[i];
        m[s[i]]--;
    }

    for(int i=s1.size()-1;i>=0;i--)
        cout << s1[i];
    cout << endl;

    return 0;
} 