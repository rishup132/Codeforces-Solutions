#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

ll m;
pair <ll,ll> s[200010];
vector <pair <ll,ll> > v[200010],v1;

bool myfun(pair <ll,ll> a, pair <ll,ll> b)
{
    return a.first%m > b.first%m;
}

int main()
{
    ll n,x;
    cin >> n >> m;

    ll k = n/m;
    ll st = 0;

    for(ll i=0;i<n;i++)
    {
        cin >> x;

        if(v[x%m].size() < k)
            v[x%m].push_back(make_pair(x,i));
        else
            s[st++] = make_pair(x,i);
    }

    sort(s,s+st,myfun);
    ll ed = st-1;
    ll count = 0,hat;
    ll st1 = 0;
    st = 0;

    for(int i=0;i<m;i++)
    {
        while(v[i].size() < k)
        {
            if(v1.size() > st1)
            {
                hat = (m+i-v1[st1].first%m)%m;
                v1[st1].first += hat;
                count += hat;
                v[i].push_back(v1[st1]);
                st1++;
            }
            else
            {
                hat = (m+i-s[st].first%m)%m;
                s[st].first += hat;
                count += hat;
                v[i].push_back(s[st]);
                st++;
            }
        }

        while(ed >= st)
        {
            if(s[ed].first%m != i)
                break;
            v1.push_back(s[ed--]);
        }
    }

    st = 0;

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<v[i].size();j++)
            s[st++] = v[i][j];
    }

    for(int i=0;i<n;i++)
    {
        hat = s[i].first;
        s[i].first = s[i].second;
        s[i].second = hat;
    }

    sort(s,s+n);

    cout << count << endl;

    for(int i=0;i<n;i++)
        cout << s[i].second << " ";
    cout << endl;

    return 0;
} 