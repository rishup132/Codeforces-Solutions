#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
        cin >> a[i];

    set <int> s;

    for(int i=n-1;i>=0;i++)
        s.insert(a[i]);

    set <int> :: iterator itr;

    for(itr = s.end()-1;itr>=s.begin();itr--)\
        cout << *itr << " ";
    cout << endl;
}