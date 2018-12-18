#include <bits/stdc++.h>

#define ll long long

using namespace std;

int main()
{
    vector <ll> v;
    v.push_back(0);

    int t = 11;
    
    while(t--)
    {
        int k = v.size();

        for(int i=0;i<k;i++)
        {
            v.push_back(v[i]*10+4);
            v.push_back(v[i]*10+7);
        }
    }

    ll l,r,ans = 0,temp;
    cin >> l >> r;

    while(l <= r)
    {
        temp = *lower_bound(v.begin(),v.end(),l);
        ans += min(temp-l+1,r-l+1)*temp;
        l = temp;

        if(binary_search(v.begin(),v.end(),l))
            l++;
    }

    cout << ans << endl;
}