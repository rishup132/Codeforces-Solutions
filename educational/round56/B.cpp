#include <bits/stdc++.h>

#define int long long
using namespace std;

int a[200010];

int32_t main()
{
    int n;
    cin >> n;

    n /= 2;

    int x;
    cin >> x;

    vector <int> v1,v2;
    v1.push_back(0);
    v2.push_back(x);

    for(int i=1;i<n;i++)
    {
        cin >> x;

        int cnt = max(x-v2.back(),v1.back());
        v1.push_back(cnt);
        v2.push_back(x-cnt);
    }

    for(int i:v1)
        cout << i << " ";
    
    reverse(v2.begin(),v2.end());

    for(int i:v2)
        cout << i << " ";
}