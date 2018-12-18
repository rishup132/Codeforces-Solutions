#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

vector <int> v[1010];
set <pair <int,int> > s;

int solve1(int n)
{
    return __gcd(abs(v[n][0]-v[n][2]),abs(v[n][1]-v[n][3])) + 1;
}

void solve2(int x, int y)
{
    //int64_t a1 = l1.b.y - l1.a.y;
    int a1 = v[x][3] - v[x][1];
    //int64_t a2 = l1.a.x - l1.b.x;
    int a2 = v[x][0] - v[x][2];
    //int64_t a3 = a1 * l1.a.x + a2 * l1.a.y;
    int a3 = a1*v[x][0] + a2*v[x][1];

    //int64_t b1 = l2.b.y - l2.a.y;
    int b1 = v[y][3] - v[y][1];
    //int64_t b2 = l2.a.x - l2.b.x;
    int b2 = v[y][0] - v[y][2];
    //int64_t b3 = b1 * l2.a.x + b2 * l2.a.y;
    int b3 = b1*v[y][0] + b2*v[y][1];

    int det = b2 * a1 - b1 * a2;

    if (det == 0)
        return;

    int xx = b2 * a3 - b3 * a2;
    int yy = b3 * a1 - b1 * a3;
    
    if (det < 0) {
        det = -det;
        xx = -xx;
        yy = -yy;
    }

    if (xx % det != 0 || yy % det != 0) {
        return;
    }

    xx /= det;
    yy /= det;
    
    if (xx < min(v[x][0], v[x][2]) || xx > max(v[x][0], v[x][2])) {
        return;
    }
    if (xx < min(v[y][0], v[y][2]) || xx > max(v[y][0], v[y][2])) {
        return;
    }
    if (yy < min(v[x][1], v[x][3]) || yy > max(v[x][1], v[x][3])) {
        return;
    }
    if (yy < min(v[y][1], v[y][3]) || yy > max(v[y][1], v[y][3])) {
        return;
    }
    
    s.insert({xx,yy});
}

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        int x,y;
        y = 4;

        while(y--)
        {
            cin >> x;
            v[i].push_back(x);
        }
    }

    int ans = 0;

    for(int i=0;i<n;i++)
    {
        ans += solve1(i);

        for(int j=i+1;j<n;j++)
            solve2(i,j);
    }

    cout << ans-s.size() << endl;
}