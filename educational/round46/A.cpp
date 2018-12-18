#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

map <string,int> m;

int main()
{
    int n;
    cin >> n;

    string s;

    int count = 0;

    for(int i=0;i<n;i++)
    {
        cin >> s;
        m[s]++;
    }

    for(int i=0;i<n;i++)
    {
        cin >> s;

        if(m[s] == 0)
            count++;
        else
            m[s]--;
    }

    cout << count << endl;
}