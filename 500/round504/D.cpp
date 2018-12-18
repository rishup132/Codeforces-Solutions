#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

int a[200010];
vector <int> v[200010];
int tree[800010];

void build(int node, int start, int end)
{
    if(start == end)
        tree[node] = a[start];
    else
    {
        int mid = (start + end) / 2;

        build(2*node, start, mid);
        build(2*node+1, mid+1, end);

        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}

int query(int node, int start, int end, int l, int r)
{
    if(r < start or end < l)
        return INT_MAX;

    if(l <= start and end <= r)
        return tree[node];

    int mid = (start + end) / 2;

    int p1 = query(2*node, start, mid, l, r);
    int p2 = query(2*node+1, mid+1, end, l, r);

    return min(p1,p2);
}

void update(int node, int start, int end, int idx, int val)
{
    if(start == end)
    {
        a[idx] = val;
        tree[node] = val;
    }
    else
    {
        int mid = (start + end) / 2;

        if(start <= idx and idx <= mid)
            update(2*node, start, mid, idx, val);
        else
            update(2*node+1, mid+1, end, idx, val);

        tree[node] = min(tree[2*node],tree[2*node+1]);
    }
}

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);

    int count = 0;

    for(int i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
        v[a[i]].push_back(i);
    }

    if(k != *max_element(a+1,a+n+1))
    {
        bool flag = true;

        for(int i=1;i<=n;i++)
        {
            if(a[i] == 0)
            {
                flag = false;
                a[i] = k;
                v[0].erase(v[0].begin());
                break;
            }
        }

        if(flag)
        {
            printf("NO\n");
            return 0;
        }
    }

    for(int i=1;i<=n;i++)
    {
        if(a[i] != 0)
        {
            int j = i-1;

            while(j >= 1 && a[j] == 0)
                a[j--] = a[i];

            j = i+1;

            while(j <= n && a[j] == 0)
                a[j++] = a[i];
        }
    }

    build(1,1,n);

    for(int i=k;i>0;i--)
    {
        if(v[i].size() > 1)
        {
            int temp = query(1,1,n,v[i][0]+1,v[i][v[i].size()-1]-1);

            if(temp < i)
            {
                printf("NO\n");
                return 0;
            }
        }
    }

    printf("YES\n");

    for(int i=1;i<=n;i++)
        printf("%d ",a[i]);
    printf("\n");
}