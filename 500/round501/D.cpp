#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

main()
{
    int n,k,s;
    cin >> n >> k >> s;

    if(s > k*(n-1) || s < k)
    {
        cout << "NO\n";
        return 0;
    }

    cout << "YES\n";
    bool flag = true;
    vector <int> v;
    v.push_back(1);

    while(s >= n)
    {
        if(flag)
        {
            v.push_back(n);
            s -= (n-1);
            flag = false;
        }
        else
        {
            v.push_back(1);
            s -= (n-1);
            flag = true;
        }
    }

    if(s > 0)
    {
        if(flag)
            v.push_back(s+1);
        else
            v.push_back(n-s);
    }

    k -= (v.size()-1);
    int st = 0;
    vector <int> p;

    while(k)
    {
        if(v[st] == 1)
        {
            p.push_back(v[st]);
            for(int i=2;i<v[st+1]&&k>0;i++,k--)
                p.push_back(i);
        }
        else
        {
            p.push_back(v[st]);
            for(int i=v[st]-1;i>v[st+1]&&k>0;i--,k--)
                p.push_back(i);
        }
        st++;
    }

    for(int i=1;i<p.size();i++)
        cout << p[i] << " ";

    if(st == 0)
        st++;
    
    for(int i=st;i<v.size();i++)
        cout << v[i] << " ";
}