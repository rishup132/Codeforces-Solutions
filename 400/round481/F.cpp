#include <bits/stdc++.h>

#define ll long long

using namespace std;

int a[200010],b[200010];
vector <pair<int,int> > v;

int main()
{
    int n,k,x,y;
    cin >> n >> k;

    for(int i=1;i<=n;i++)
    {
        cin >> b[i];
        v.push_back(make_pair(b[i],i));
    }

    memset(a,0,100010*sizeof(a[0]));

    while(k--)
    {
        cin >> x >> y;

        if(b[x] > b[y])
            a[x]++;
        else if(b[y] > b[x])
            a[y]++;
    }

    sort(v.begin(),v.end());

    /*for(int i=1;i<=n;i++)
        cout << a[i] << " ";
    cout << endl;

    for(int i=0;i<v.size();i++)
        cout << v[i].first << " " << v[i].second << endl;
    cout << endl;*/

    int count = 1,ans = 0;

    a[v[0].second] = 0;

    for(int i=1;i<v.size();i++)
    {
        if(v[i].first == v[i-1].first)
        {
            a[v[i].second] = max(0,ans-a[v[i].second]);
            count++;
        }
        else
        {
            ans += count;
            count = 1;
            a[v[i].second] = max(0,ans-a[v[i].second]);
        }
    }

    for(int i=1;i<=n;i++)
        cout << a[i] << " ";
    cout << endl;
}