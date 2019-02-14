#include <bits/stdc++.h>

#define int long long unsigned
#define mod 1000000007

using namespace std;

vector <int> ans;

void brute(int pos, int cnt, int cur)
{
    if(pos == 18)
    {
        ans.push_back(cur);
        return;
    }

    brute(pos+1,cnt,cur*10);

    if(cnt < 3)
    {
        for(int i=1;i<10;i++)
            brute(pos+1,cnt+1,cur*10+i);
    }
}

int32_t main()
{
    brute(0,0,0);
    ans.push_back(1000000000000000000);

    int t;
    cin >> t;

    while(t--)
    {
        int x,y;
        cin >> x >> y;

        cout << upper_bound(ans.begin(),ans.end(),y) - lower_bound(ans.begin(),ans.end(),x) << endl;
    }
}