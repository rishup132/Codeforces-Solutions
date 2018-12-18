#include <bits/stdc++.h>

using namespace std;

bool solve(int a, int b)
{
    int ans = 0;

    string s = to_string(a);

    for(auto i:s)
    {
        if(i == '4' || i == '7')
            ans = ans*10 + (i-'0');
    }

    return ans == b;
}

int main()
{
    int a,b;
    cin >> a >> b;

    while(true)
    {
        a++;

        if(solve(a,b))
        {
            cout << a << endl;
            return 0;
        }
    }
}