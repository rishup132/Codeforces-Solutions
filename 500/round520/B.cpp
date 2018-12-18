#include <bits/stdc++.h>

#define int long long
#define endl "\n"

using namespace std;

int prime[1000100];
vector <int> v;

int32_t main()
{
    int n;
    cin >> n;

    if(n == 1)
    {
        cout << "1 0" << endl;
        return 0;
    }

    for(int i=2;i*i<=1e6;i++)
    {
        if(prime[i] == 0)
        {
            for(int j=i*i;j<=1e6;j+=i)
                prime[j] = 1;
        }
    }

    for(int i=2;i<=1e6;i++)
    {
        if(prime[i] == 0)
            v.push_back(i);
    }

    int ans = 0;
    int pat = 1;
    int wat = 0;

    for(int i=0;i<v.size();i++)
    {
        if(n%v[i] == 0)
        {
            int cnt = 0;

            while(n%v[i] == 0)
                n /= v[i], cnt++;

            if(ans == 0)
                ans = cnt;
            else if(cnt != ans)
                wat = 1;

            ans = max(ans,cnt);

            pat *= v[i];
        }
    }

    for(int i=0;;i++)
    {
        int temp = pow(2,i);

        if(temp > ans)
        {
            wat = i+1;
            break;
        }
        else if(temp == ans)
        {
            wat += i;
            break;
        }
    }

    cout << pat << " " << wat << endl;
    return 0;
}