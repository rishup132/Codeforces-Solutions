#include <bits/stdc++.h>

#define int long long
using namespace std;

int a[200010];

struct segtree{
    int m1,m2;
};

segtree tree[1000010];

void build(int node, int start, int end)
{
    if(start == end)
        tree[node].m1 = tree[node].m2 = a[start];
    else
    {
        int mid = (start + end) / 2;

        build(2*node, start, mid);
        build(2*node+1, mid+1, end);

        tree[node].m1 = min(tree[2*node].m1, tree[2*node+1].m1);
        tree[node].m2 = max(tree[2*node].m2, tree[2*node+1].m2);
    }
}

void update(int node, int start, int end, int idx)
{
    if(start == end)
        tree[node].m1 = tree[node].m2 = a[idx];
    else
    {
        int mid = (start + end) / 2;

        if(start <= idx and idx <= mid)
            update(2*node, start, mid, idx);
        else
            update(2*node+1, mid+1, end, idx);
        
        tree[node].m1 = min(tree[2*node].m1, tree[2*node+1].m1);
        tree[node].m2 = max(tree[2*node].m2, tree[2*node+1].m2);
    }
}

segtree query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
    {
        segtree temp;
        temp.m1 = 1e18;
        temp.m2 = -1;
        return temp;
    }

    if(l <= start and end <= r)
        return tree[node];
    
    int mid = (start + end) / 2;
    auto p1 = query(2*node, start, mid, l, r);
    auto p2 = query(2*node+1, mid+1, end, l, r);

    p1.m1 = min(p1.m1,p2.m1);
    p1.m2 = max(p2.m2,p1.m2);
    
    return p1;
}

int32_t main()
{
    int n,k;
    cin >> n >> k;

    int x;

    for(int i=0;i<n;i++)
    {
        for(int j=1;j<=k;j++)
            cin >> x, a[i] += (x + 1e9);
    }

    build(1,0,n-1);

    int q;
    cin >> q;

    while(q--)
    {
        int t;
        cin >> t;

        if(t == 1)
        {
            int l;
            cin >> l;
            l--;
            a[l] = 0;

            for(int i=1;i<=k;i++)
                cin >> x, a[l] += (x + 1e9);

            update(1,0,n-1,l);
        }
        else
        {
            int l,r;
            cin >> l >> r;

            auto ans = query(1,0,n-1,l-1,r-1);

            cout << ans.m2 - ans.m1 << endl;
        }
    }
}