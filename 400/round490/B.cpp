#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

vector <int> v;

void divisor(int n)
{
    for (int i=1; i<=sqrt(n); i++)
    {
        if (n%i == 0)
        {
            if (n/i == i)
                v.push_back(i);
            else
            {
                v.push_back(i);
                v.push_back(n/i);
            }
        }
    }

    sort(v.begin(),v.end());
}

int main()
{
    int n;
    cin >> n;

    divisor(n);

    string s,s1;
    cin >> s;

    for(int i=0;i<v.size();i++)
    {
        s1 = "";

        for(int j=v[i]-1;j>=0;j--)
            s1 += s[j];
        
        for(int j=v[i];j<s.size();j++)
            s1 += s[j];

        s = s1;
    }

    cout << s << endl;

    return 0;
} 