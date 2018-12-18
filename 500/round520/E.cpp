#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

struct you
{
    vector <pair <int,int> > a;
};

vector <int> v[200010];
int l[200010];
you tree[1000010];

void build(int node, int start, int end)
{
    if(start == end)
    {
        for(int i=0;i<5;i++)
            tree[node].a.push_back({l[start],start});
    }
    else
    {
        int mid = (start + end) / 2;
        build(2*node, start, mid);
        build(2*node+1, mid+1, end);
    
        vector <pair <int,int> > b;
 
        for(int i=0;i<5;i++)
            b.push_back(tree[2*node].a[i]);

        for(int i=0;i<5;i++)
            b.push_back(tree[2*node+1].a[i]);

        sort(b.begin(),b.end());

        for(int i=5;i<10;i++)
            tree[node].a.push_back(b[i]);
    }
}

you query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        you temp;

        for(int i=0;i<5;i++)
            temp.a.push_back({-1,-1});

        return temp;
    }
    if(l <= start and end <= r)
        return tree[node];

    int mid = (start + end) / 2;
    you p1 = query(2*node, start, mid, l, r);
    you p2 = query(2*node+1, mid+1, end, l, r);

    vector <pair <int,int> > b;
 
    for(int i=0;i<5;i++)
        b.push_back(p1.a[i]);

    for(int i=0;i<5;i++)    
        b.push_back(p2.a[i]);

    sort(b.begin(),b.end());

    p1.a.clear();

    for(int i=5;i<10;i++)
        p1.a.push_back(b[i]);

    return p1;
}

int32_t main()
{
    int n,q;
    cin >> n >> q;

    for(int i=2;i<=n;i++)
    {
        int x;
        cin >> x;

        v[x].push_back(i);
    }

    int cnt = 0;
    queue <int> bq;
    bq.push(1);
    bq.push(-1LL);

    while(!bq.empty())
    {
        int t = bq.front();
        bq.pop();

        l[t] = cnt;

        if(t == -1)
        {
            if(bq.empty())
                break;
            bq.push(-1LL);
            cnt++;
        }

        for(int i=0;i<v[t].size();i++)
            bq.push(v[t][i]);
    }

    for(int i=1;i<=n;i++)
        cout << l[i] << " ";
    cout << endl;

    build(1,1,n);

    while(q--)
    {
        int ll,r;
        cin >> ll >> r;

        if(r-ll < 5)
        {
            vector <pair<int,int> > t;

            for(int i=ll;i<=r;i++)
                t.push_back({l[i],i});

            sort(t.begin(),t.end());

            cout << t.back().second << " ";

            t.pop_back();

            if(t.size() == 1)
                cout << t[0].first << endl;
            else
            {
                pair <int,int> t1 = t.back();
                t.pop_back();
                pair <int,int> t2 = t.back();

                if(t1.first == t2.first)
                    cout << t1.first-1 << endl;
                else
                    cout << t1.first << endl;
            }
        }
        else
        {
            you t = query(1,1,n,ll,r);

            cout << t.a.back().second << " ";

            t.a.pop_back();
            pair <int,int> t1 = t.a.back();
            t.a.pop_back();
            pair <int,int> t2 = t.a.back();

            if(t1.first == t2.first)
                cout << t1.first-1 << endl;
            else
                cout << t1.first << endl;
        }
    }

    return 0;
}