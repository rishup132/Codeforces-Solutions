#include <bits/stdc++.h>

#define ll long long

using namespace std;

int a[1010];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    map <int,int> m;
    vector <int> v;

    for(int i=n-1;i>=0;i--)
    {
        if(m[a[i]] == 0)
        {
            v.push_back(a[i]);
            m[a[i]]++;
        }
    }

    cout << v.size() << endl;

    for(int i=v.size()-1;i>=0;i--)
        cout << v[i] << " ";
    cout << endl;
}