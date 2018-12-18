#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>

using namespace std;

int a[200010];
vector <int> v;
set <int> s;
map <int,int> m;

int32_t main()
{
    int n,x,y;
    cin >> n;

    if(n%3 == 0)
        cout << 1 << " " << 1 << " " << n-2 << endl;
    else
        cout << 1 << " " << 2 << " " << n-3 << endl;
    return 0;
}