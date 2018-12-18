#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int main()
{
    int n,x;
    cin >> n;

    set <int> s;

    for(int i=0;i<n;i++)
    {
        cin >> x;

        if(x != 0)
            s.insert(x);
    }

    cout << s.size() << endl;
}