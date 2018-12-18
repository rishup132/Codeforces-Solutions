#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int n,k,x;
    cin >> n >> k;

    set <int> s;
    map <int,int> m;

    for(int i=1;i<=n;i++)
    {
        cin >> x;
        s.insert(x);
        m[x] = i;
    }

    if(s.size() < k)
        cout << "NO" << endl;
    else
    {
        cout << "YES" << endl;

        set <int> :: iterator it = s.begin();

        while(k--)
        {
            cout << m[*it] << " ";
            it++;
        }
        cout << endl;
    }
}