#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

int a[100010];

int main()
{
    int n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++)
        cin >> a[i];

    vector <pair<int,int> > v;

    int co = 0;
    int ev = 0;

    for(int i=0;i<n-1;i++)
    {
        if(a[i]%2 == 0)
            ev++;
        else
            co++;

        if(co == ev)
            v.push_back(make_pair(abs(a[i]-a[i+1]),i));
    }

    sort(v.begin(),v.end());

    int count = 0;

    for(int i=0;i<v.size();i++)
    {
        if(k >= v[i].first)
        {
            k -= v[i].first;
            count++;
        }
        else
            break;
    }

    cout << count << endl;
    //cout << solve(0,n-1) << endl;
}