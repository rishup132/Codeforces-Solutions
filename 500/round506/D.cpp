#include <bits/stdc++.h>

#define mod 1000000007

using namespace std;

int a[200010];
int b[200010];

unordered_map <int,int> m[11];

int main()
{
    int n,k,j,temp;
    scanf("%d %d",&n,&k);

    long long x,count;

    for(int i=0;i<=10;i++)
	{
		m[i].reserve(1<<15);
		m[i].max_load_factor(0.25);
	}

    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);

        count = 0;
        x = a[i];

        while(x)
        {
            count++;
            x /= 10;
        }

        b[i] = count;
        a[i] %= k;

        m[b[i]][a[i]]++;
    }

    count = 0;

    for(int i=0;i<n;i++)
    {
        m[b[i]][a[i]]--;

        x = a[i];
        j = 0;

        while(j <= 10)
        {
            count += m[j][(k-x)%k];

            x = (x*10)%k;
            j++;
        }

        m[b[i]][a[i]]++;
    }

    printf("%lld\n",count);
}