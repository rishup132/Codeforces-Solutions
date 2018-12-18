#include<bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

pair<int,int> p[110];

int main()
{
    int n,s;
    cin >> n >> s;

    int x,y;

    for(int i=0;i<n;i++)
        cin >> p[i].first >> p[i].second;

    int ans1,ans2;

    if((p[0].first*60+p[0].second) > s)
    {
        cout << 0 << " " << 0 << endl;
        return 0;
    }

    for(int i=1;i<n;i++)
    {
        if((p[i].first*60+p[i].second - p[i-1].first*60-p[i-1].second) > 2*s+1)
        {
            int temp = p[i-1].first*60+p[i-1].second+s+1;

            cout << temp/60 << " " << temp%60 << endl;
            return 0;
        }
    }

    int temp = p[n-1].first*60+p[n-1].second+s+1;

    cout << temp/60 << " " << temp%60 << endl;
    return 0;
}
