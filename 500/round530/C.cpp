#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int32_t main()
{
    string s;
    cin >> s;

    int k;
    cin >> k;

    int n = s.size();

    vector <int> v1,v2;

    for(int i=0;i<n;i++)
    {
        if(s[i] == '?')
            v1.push_back(i);
        else if(s[i] == '*')
            v2.push_back(i);
    }

    if(v2.size() == 0)
    {
        if(k >= n-2*v1.size() && k <= n-v1.size())
        {
            k -= (n-2*v1.size());

            while(k--)
                v1.pop_back();

            for(int i:v1)
                s[i-1] = '*';

            for(char i:s)
            {
                if(i == '*' || i == '?')
                    continue;
                
                cout << i;
            }
        }
        else
            cout << "Impossible" << endl;
    }
    else
    {
        if(k < n - 2*(v1.size()+v2.size()))
            cout << "Impossible" << endl;
        else if(k == n - 2*(v1.size()+v2.size()))
        {
            for(int i:v1)
                s[i-1] = '*';

            for(int i:v2)
                s[i-1] = '*';

            for(char i:s)
            {
                if(i == '*' || i == '?')
                    continue;
                
                cout << i;
            }
        }
        else
        {
            k -= (n + 1 - 2*(v1.size()+v2.size()));

            int temp = v2.back()-1;
            v2.pop_back();

            for(int i:v1)
                s[i-1] = '*';

            for(int i:v2)
                s[i-1] = '*';

            for(int i=0;i<n;i++)
            {
                if(s[i] == '?' || s[i] == '*')
                    continue;

                if(i == temp)
                {
                    while(k--)
                        cout << s[temp];
                }

                cout << s[i];
            }
        }
    }
}