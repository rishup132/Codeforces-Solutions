#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

char a[110][110];

int main()
{
    int n,k;
    cin >> n >> k;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cin >> a[i][j];
    }

    int ans = 0;
    pair<int,int> p = make_pair(1,1);

    for(int i=0;i<n;i++)
    {
        int count1,count2;
        count1 = count2 = 0;
        for(int j=0;j<n;j++)
        {
            if(a[i][j] == '#')
            {
                if(count1 >= k && count1 > ans)
                {
                    ans = count1;
                    p.first = i;
                    p.second = j-count1+k+1;
                }

                count1 = 0;
            }
            else
                count1++;

            if(a[j][i] == '#')
            {
                if(count2 >= k && count2 > ans)
                {
                    ans = count2;
                    p.first = j;
                    p.second = i-count2+k+1;
                }

                count2 = 0;
            }
            else
                count2++;
        }
    }

    cout << p.first+1 << " " << p.second+1 << endl;
}