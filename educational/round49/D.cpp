#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[200010],b[200010];
bool vis1[200010],vis2[200010];
int ans = 0;

main()
{
    int n;
    cin >> n;

    for(int i=1;i<=n;i++)
        cin >> a[i];

    memset(vis1,false,200010*sizeof(vis1[0]));
    memset(vis2,false,200010*sizeof(vis2[0]));

    for(int i=1;i<=n;i++)
        cin >> b[i];

    for(int i=1;i<=n;i++)
    {
        if(!vis2[i] && !vis1[i])
        {
            int j = i;

            while(!vis1[j] && !vis2[j])
            {
                vis1[j] = true;
                j = b[j];
            }

            if(vis2[j])
            {
                j = i;

                while(!vis2[j])
                {
                    vis2[j] = true;
                    j = b[j];
                }
                continue;
            }

            int temp = INT_MAX;

            while(!vis2[j])
            {
                temp = min(temp,a[j]);
                vis2[j] = true;
                j = b[j];
            }

            j = i;

            while(!vis2[j])
            {
                vis2[j] = true;
                j = b[j];
            }

            ans += temp;
        }
    }

    cout << ans << endl;
}