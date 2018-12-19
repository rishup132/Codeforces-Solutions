#include <bits/stdc++.h>

using namespace std;

stack <int> s;

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int x;
        cin >> x;

        if(s.empty() || s.top() != x)
            s.push(x);
        else
            s.pop();
    }

    if(s.size() > 1)
        cout << "NO\n";
    else
        cout << "YES\n";
}