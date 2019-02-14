#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int ans[] = {0,1,1,5,1,21,1,85,73,341,89,1365,1,5461,4681,21845,1,87381,1,349525,299593,1398101,178481,5592405,1082401};

int32_t main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector <int> v;
    int cnt = 1;

    for(int i=1;i<40;i++)
        cnt *= 2, v.push_back(cnt-1);

    while(n--)
    {
        int x;
        cin >> x;

        bool flag = binary_search(v.begin(),v.end(),x);

        if(flag)
            cout << ans[lower_bound(v.begin(),v.end(),x) - v.begin()] << endl;
        else
            cout << *upper_bound(v.begin(),v.end(),x) << endl;
    }
}