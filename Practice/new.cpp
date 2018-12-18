#include <bits/stdc++.h>

#define int long long

using namespace std;

int a[1000];
map <multiset<int>, int> dp;
int n,k;

int solve(multiset <int> m)
{
    if(m.size() == 1)
        return *m.begin();

    if(dp[m] == 0)
    {
        int ans = 0;

        for(auto i=m.begin();i!= m.end();i++)
        {
            for(auto j=m.begin();j!=m.end();j++)
            {
                if(i != j)
                {
                    multiset <int> temp = m;
                    temp.erase(i);
                    temp.erase(j);

                    if(*j > *i)
                        temp.insert(*j-*i+k);
                    else
                        temp.insert(*i-*j+k);

                    dp[temp] = solve(temp);

                    if(ans < k+dp[temp])
                        ans = k+dp[temp]
                }
            }
        }

        dp[m] = ans;
    }

    return dp[m];
}

int32_t main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	int t;
	cin >> t;

	while(t--)
	{
		cin >> n >> k;

        int sum = 0;

		for(int i=0;i<n;i++)
			cin >> a[i], sum += a[i];

		multiset <int> s;
        int sum2 = 0;

        for(int i=0;i<n;i++)
        {
            if(a[i] > k)
                s.insert(a[i]);
            else
                sum2 += a[i];
        }

        if(s.size() < 2)
        {
            cout << sum << endl;
            continue;
        }

        cout << sum2 + solve(s) << endl;
	}

	return 0;
}
