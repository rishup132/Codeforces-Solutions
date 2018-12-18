#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin >> n;

    string s;
    cin >> s;

    bool flag = true;

    for(int i=0;i<n;i++)
    {
        if(s[i] == '1')
        {
            if(flag)
            {
                cout << 1;
                flag = false;
            }
        }
        else
            cout << 0;
    }

    cout << endl;
}