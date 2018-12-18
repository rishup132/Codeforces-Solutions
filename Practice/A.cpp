#include <bits/stdc++.h>

#define m 1000000007
#define ll long long
#define ff first
#define ss second
#define pb push_back
#define mk make_pair
#define sf(x) scanf("%d",&x)
#define pf(x) printf("%d",x)

using namespace std;

int a[100010];

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