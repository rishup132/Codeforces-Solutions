#include <bits/stdc++.h>
#define ll long long
using namespace std;

string s[100010];
ll int a[100010];
map <string,ll int> mm;
vector <ll int> v;

int main()
{
    ll int n,k,m,x,y,min;
    cin >> n >> k >> m;

    for(ll int i=0;i<n;i++)
        cin >> s[i];

    for(ll int i=0;i<n;i++)
        cin >> a[i];

    for(ll int i=0;i<k;i++)
    {
        cin >> x;
        min = 1000000007;

        v.clear();

        while(x--)
        {
            cin >> y;
            v.push_back(y-1);

            if(a[y-1] < min)
                min = a[y-1];
        }

        for(ll int j=0;j<v.size();j++)
            a[v[j]] = min;
    }

    for(ll int i=0;i<n;i++)
        mm[s[i]] = a[i];

    ll int count = 0;
    string s1;

    for(ll int i=0;i<m;i++)
    {
        cin >> s1;

        count += mm[s1];
    }

    cout << count << endl;
}