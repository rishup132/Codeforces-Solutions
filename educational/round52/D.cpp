#include <bits/stdc++.h>

#define int long long
#define mod 1000000007
#define p pair<int,int>
#define MAX 1000010

using namespace std;

struct cell 
{ 
    int x, y; 
    int dis; 
    cell() {} 
    cell(int x, int y, int dis) : x(x), y(y), dis(dis) {} 
}; 

bool isInside(int x, int y, int N) 
{ 
    if (x >= 1 && x <= N && y >= 1 && y <= N) 
        return true; 
    return false; 
} 

int minStepToReachTarget(int knightPos[], int targetPos[], int N) 
{ 
    int dx[] = {-2, -1, 1, 2, -2, -1, 1, 2}; 
    int dy[] = {-1, -2, -2, -1, 1, 2, 2, 1}; 

    queue<cell> q; 

    q.push(cell(knightPos[0], knightPos[1], 0)); 
  
    cell t;
    int x, y; 
    bool visit[N + 1][N + 1]; 

    for (int i = 1; i <= N; i++) 
        for (int j = 1; j <= N; j++) 
            visit[i][j] = false; 

    visit[knightPos[0]][knightPos[1]] = true; 

    while (!q.empty()) 
    { 
        t = q.front(); 
        q.pop(); 
  
        if (t.x == targetPos[0] && t.y == targetPos[1]) 
            return t.dis; 
  
        for (int i = 0; i < 8; i++) 
        { 
            x = t.x + dx[i]; 
            y = t.y + dy[i]; 

            if (isInside(x, y, N) && !visit[x][y]) { 
                visit[x][y] = true; 
                q.push(cell(x, y, t.dis + 1)); 
            } 
        } 
    } 

    return 1e9;
}

int solve(int sor[], int tar[], int x)
{
    if((sor[0]+sor[1])%2 != (tar[0]+tar[1])%2)
        return 1e9;

    return max(abs(sor[0]-tar[0]),abs(sor[1]-tar[1]));
}

int32_t main()
{
    int n;
    cin >> n;

    int a[12][12];
    map <int,pair<int,int> > m;

    for(int i=1;i<=n;i++)
    {
        for(int j=1;j<=n;j++)
        {
            cin >> a[i][j];

            m[a[i][j]] = {i,j};
        }
    }

    vector <int> v[110];

    for(int i=1;i<n*n;i++)
    {
        int sz[2] = {m[i].first,m[i].second};
        int tz[2] = {m[i+1].first,m[i+1].second};

        v[i].push_back(minStepToReachTarget(sz,tz,n));
        //cout << minStepToReachTarget(sz,tz,n) << endl;
        v[i].push_back(abs(m[i].first-m[i+1].first)+abs(m[i+1].second-m[i].second));
        v[i].push_back(solve(sz,tz,n));
    }

    for(int i=1;i<n*n;i++)
        cout << v[i][0] << " " << v[i][1] << " " << v[i][2] << endl;

    pair<int,int> dp[110][3];

    for(int i=0;i<110;i++)
    {
        for(int j=0;j<3;j++)
            dp[i][j] = {1e9,1e9};
    }

    for(int i=1;i<n*n;i++)
    {
        if(i == 1)
        {
            dp[1][0] = {v[1][0],0};
            dp[1][1] = {v[1][1],0};
            dp[1][2] = {v[1][2],0};
            continue;
        }

        for(int k=0;k<3;k++)
        {
            for(int j=0;j<3;j++)
            {
                if(k == j)
                {
                    if(dp[i][k].first > v[i][k]+dp[i-1][j].first)
                        dp[i][k] = {v[i][k]+dp[i-1][j].first,dp[i-1][j].second};
                    else if(dp[i][k].first == v[i][k]+dp[i-1][j].first && dp[i][k].second > dp[i-1][j].second)
                        dp[i][k] = {v[i][k]+dp[i-1][j].first,dp[i-1][j].second};
                }
                else
                {
                    if(dp[i][k].first > v[i][k]+dp[i-1][j].first)
                        dp[i][k] = {v[i][k]+dp[i-1][j].first,dp[i-1][j].second+1};
                    else if(dp[i][k].first == v[i][k]+dp[i-1][j].first && dp[i][k].second > dp[i-1][j].second+1)
                        dp[i][k] = {v[i][k]+dp[i-1][j].first,dp[i-1][j].second+1};
                }
            }
        }
    }

    pair <int,int> ans = {1e9,1e9};

    for(int i=0;i<3;i++)
    {
        if(ans.first > dp[n*n-2][i].first)
            ans = dp[n*n-2][i];
        else if(ans.first == dp[n*n-2][i].first && ans.second > dp[n*n-2][i].second)
            ans = dp[n*n-2][i];
    }

    cout << ans.first << " " << ans.second << endl;

    return 0;
}