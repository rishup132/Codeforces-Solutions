#include <bits/stdc++.h>

using namespace std;

int a[100010],b[100010];

int dp[100010];

int solve(int n, int m)
{
	if(a[i] == 0 || b[i] == 0)
	{
		if(a[i] == 0 && b[i] != 0)
		{
			return m*(m+1)/2*solve(i+1,m);
		}
		else if(a[i] == 0)
			
	}
	else
	{
		if(a[i] >= b[i])
		{
			if(dp[i+1] == -1)
			{
				dp[i+1] = solve(i+1);
			}

			dp[i] = dp[i+1];

			return dp[i];
		}
	}
}

int main()
{
	int n,count=0,m;
	cin >> n >> m;

	for(int i=0;i<n;i++)
		cin >> a[i];

	for(int i=0;i<n;i++)
		cin >> b[i];

	for(int i=0;i<n;i++)
	{
		
	}
}