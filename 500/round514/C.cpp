#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

int a[MAX],b[MAX];
bool vis[MAX];

vector <int> v;
vector <p> vp;
set <int> s;
set <p> sp;
map <int,int> m;
unordered_map <int,int> um;
queue <int> bq;


int32_t main()
{
    um.reserve(1<<15);
    um.max_load_factor(0.25);
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin >> n;

    vector <int> v,ans;

    for(int i=1;i<=n;i++)
        v.push_back(i);

    int temp = 1;

    while(!v.empty())
    {
        int count = 0;
        vector <int> v1;

        for(int i:v)
        {
            if(i%2)
                count++;
            else
                v1.push_back(i/2);
        }

        while(count--)
            ans.push_back(temp);

        temp *= 2;

        v = v1;
    }

    temp = __gcd(ans[n-2],ans[n-1]);
    ans[n-1] = (n/temp)*temp;

    for(int i:ans)
        cout << i << " ";
    cout << endl;

    return 0;
}