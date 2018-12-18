#include <bits/stdc++.h>

#define ll long long

using namespace std;

int a[1010];

int main()
{
    int n;
    cin >> n;

    int count = 0;

    string s;
    cin >> s;

    for(int i=0;i<s.size()-2;i++)
    {
        if(s[i] == 'x' && s[i+1] == 'x' && s[i+2] == 'x')
            count++;
    }

    cout << count << endl;
}