#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

int a[MAX],b[MAX];
int c[MAX][4];
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
    n--;

    for(int i=0;i<n;i++)
        cin >> a[i];

    for(int i=0;i<n;i++)
        cin >> b[i];

    for(int i=0;i<=n;i++)
    {
        for(int j=0;j<4;j++)
            c[i][j] = -1;
    }

    c[0][0] = 0;
    c[0][1] = 1;
    c[0][2] = 2;
    c[0][3] = 3;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<4;j++)
        {
            for(int k=0;k<4;k++)
            {
                if((j|k) == a[i] && (j&k) == b[i] && c[i][k] != -1)
                {
                    // cout << j << " " << k << endl;
                    // cout << (j|k) << " " << (j&k) << endl;
                    // cout << a[i] << " " << b[i] << endl; 
                    c[i+1][j] = c[i][k];
                    break;
                }
            }
        }

        int cnt = 0;

        // for(int j=0;j<4;j++)
        //     cnt += c[i+1][j], cout << c[i+1][j] << " ";
        // cout << endl;

        if(cnt == -4)
        {
            cout << "NO\n";
            return 0;
        }
    }

    for(int i=0;i<4;i++)
    {
        bool flag = false;

        for(int j=0;j<=n;j++)
        {
            bool flag1 = true;

            for(int k=0;k<4;k++)
            {
                if(c[j][k] == i)
                {
                    flag1 = false;
                    break;
                }
            }

            if(flag1)
            {
                flag = true;
                break;
            }
        }

        if(flag)
            continue;

        cout << "YES\n";

        for(int j=0;j<=n;j++)
        {
            for(int k=0;k<4;k++)
            {
                if(c[j][k] == i)
                {
                    cout << k << " ";
                    break;
                }
            }
        }
        cout << endl;

        return 0;
    }

    cout << "NO\n";

    return 0;
}