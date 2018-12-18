#include <bits/stdc++.h>

#define int long long

using namespace std;

vector <int> v;
map <int,int> m;

int32_t main()
{
    int n;
    cin >> n;

    for(int i=1;i<n;i++)
    {
        int x,y;
        cin >> x >> y;

        m[x]++;
        v.push_back(x);

        if(y != n)
        {
            cout << "NO\n";
            return 0;
        }
    }

    stack <int> s;

    for(int i=1;i<n;i++)
    {
        if(m[i] == 0)
            s.push(i);
    }

    v.push_back(n);
    sort(v.begin(),v.end());

    for(int i=v.size()-1;i>0;i--)
    {
        if(v[i] <= i)
        {
            cout << "NO\n";
            return 0;
        }

        if(v[i] == v[i-1])
        {
            if(s.empty())
            {
                cout << "NO\n";
                return 0;
            }

            v[i] = s.top();
            s.pop();
        }
    }

    cout << "YES\n";
    for(int i=1;i<v.size();i++)
        cout << v[i-1] << " " << v[i] << endl;
}