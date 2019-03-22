#include <bits/stdc++.h>

#define int long long

using namespace std;

const int N = 9;
const int L = 840;

int w;
int a[10];
vector <int> pos(8);
int myAns;
int dp[N][L * N];

int solve1()
{
    int ans = 0;

    for(int j=0; j<=2; j++)
    {
        for(int i=0; i<8; i++) 
            pos[i]=i+1;

        do{
            myAns = 0;

            for(int i=0; i<8; i++)
            {
                int t = min( max(a[ pos[i]-1 ]-j,0LL) , (w-myAns)/pos[i]);
                myAns+=t*pos[i];
            }

            ans=max(ans,myAns);

        }while(next_permutation(pos.begin(),pos.end()));
    }

    return ans;
}

int solve2()
{
    for(int i = 0; i < N; i++) 
        for(int j = 0; j < L * N; j++) 
            dp[i][j] = -1;

	dp[0][0] = 0;

	for(int i = 0; i < 8; i++)
	{
		for(int j = 0; j < L * N; j++)
		{
			if(dp[i][j] == -1) 
                continue;

			int b = L / (i + 1);

			if(a[i] < b)
				b = a[i];

			for(int k = 0; k <= b; k++)
			{
				int& d = dp[i + 1][j + k * (i + 1)];
				d = max(d, dp[i][j] + (a[i] - k) / (L / (i + 1)));
			}
		}
	}

	int ans = 0;

	for(int j = 0; j < L * N; j++)
	{
		if(j > w || dp[8][j] == -1)
			continue;
		ans = max(ans, j + L * (min(dp[8][j], (w - j) / L)));
	}
	
    return ans;
}

int32_t main()
{
    int t = 100;

    while(t--)
    {
        w = rand()%1000000;
        
        for(int i=0;i<8;i++)
            a[i] = rand()%10000;

        int p = solve1();
        int q = solve2();

        if(p != q)
        {
            cout << w << endl;
            for(int i=0;i<8;i++)
                cout << a[i] << " ";
            cout << endl << endl;
        }
    }
}