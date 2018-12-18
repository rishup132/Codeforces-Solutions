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

    int n,m;
    cin >> n >> m;

    string s[1010];

    s[0] = s[1] = s[n+2] = s[n+3] = string(n+3,'.');

    for(int i=2;i<=n+1;i++)
    {
        string ss;
        cin >> ss;
        s[i] = ".." + ss + "..";
    }

    for(int i=2;i<=n+1;i++)
    {
        for(int j=2;j<=m+1;j++)
        {
            if(s[i][j] == '#')
            {
                bool flag = false;

                int temp;

                temp = s[i+1][j] + s[i+2][j] + s[i][j+1] + s[i+2][j+1] + s[i][j+2] + s[i+1][j+2] + s[i+2][j+2] - 7*'#';

                if(temp == 0)
                    flag |= true;

                temp = s[i+1][j] + s[i-1][j] + s[i-1][j+1] + s[i+1][j+1] + s[i][j+2] + s[i+1][j+2] + s[i-1][j+2] - 7*'#';

                if(temp == 0)
                    flag = true;

                temp = s[i-1][j] + s[i-2][j] + s[i][j+1] + s[i-2][j+1] + s[i][j+2] + s[i-1][j+2] + s[i-2][j+2] - 7*'#';

                if(temp == 0)
                    flag = true;

                temp = s[i-2][j-1] + s[i-1][j-1] + s[i][j-1] + s[i-2][j] + s[i-2][j+1] + s[i-1][j+1] + s[i][j+1] - 7*'#';

                if(temp == 0)
                    flag = true;

                temp = s[i-1][j] + s[i-2][j] + s[i][j-1] + s[i][j-2] + s[i-2][j-2] + s[i-1][j-2] + s[i-2][j-1] - 7*'#';

                if(temp == 0)
                    flag = true;

                temp = s[i-1][j] + s[i-1][j-1] + s[i-1][j-2] + s[i][j-2] + s[i+1][j-2] + s[i+1][j] + s[i+1][j-1] - 7*'#';

                if(temp == 0)
                    flag = true;

                temp = s[i][j-1] + s[i][j-2] + s[i+1][j] + s[i+1][j-2] + s[i+2][j-2] + s[i+2][j-1] + s[i+2][j] - 7*'#';

                if(temp == 0)
                    flag = true;

                temp = s[i+1][j-1] + s[i+2][j-1] + s[i][j-1] + s[i+2][j+1] + s[i][j+1] + s[i+1][j+1] + s[i+2][j] - 7*'#';

                if(temp == 0)
                    flag = true;

                if(!flag)
                {
                    //cout << n << " " << m << endl;
                    cout << "NO\n";
                    return 0;
                }
            }
        }
    }
    
    cout << "YES\n";

    return 0;
}