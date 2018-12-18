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
    int n,mm;
    cin >> n >> mm;

    if(n > mm)
        swap(n,mm);

    if(n == 1)
        cout << (mm/6)*6 + 2*max((mm%6 - 3),0LL) << endl;
    else if(n == 2)
    {
        if(mm == 2)
            cout << 0 << endl;
        else if(mm == 3)
            cout << 4 << endl;
        else if(mm == 7)
            cout << 2*mm - 2 << endl;
        else
            cout << 2*mm << endl;
    }
    else if(n%2 == 0 || mm%2 == 0)
        cout << n*mm << endl;
    else
        cout << n*mm-1 << endl;
    return 0;
}