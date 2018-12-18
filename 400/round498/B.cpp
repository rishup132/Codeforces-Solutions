#include <bits/stdc++.h>

#define ll long long int
#define mod 1000000007

using namespace std;

map <int,int> m;
int a[100010],b[100010];

int main()
{
    int k,n;
    cin >> n >> k;

    for(int i=0;i<n;i++)
    {
        cin >> a[i];
        b[i] = a[i];
    }

    sort(b,b+n);
    int t = k;
    int ans = 0;

    for(int i=n-1;i>=0,k>0;i--,k--)
    {
        m[b[i]]++;
        ans += b[i];
    }

    vector <int> v;
    int count = 0;

    for(int i=0;i<n;i++)
    {
        if(m[a[i]] > 0)
        {
            v.push_back(count+1);
            count = 0;
            m[a[i]]--;
        }
        else
            count++;
    }

    cout << ans << endl;

    ans = n;

    for(int i=0;i<v.size()-1;i++)
    {
        cout << v[i] << " ";
        ans -= v[i];
    }
    
    cout << ans << endl;

    return 0;
}