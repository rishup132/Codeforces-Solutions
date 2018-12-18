#include <bits/stdc++.h>

#define int long long
#define mod 1000000007

using namespace std;

int a[1000010];

main()
{
    int t;
    scanf("%lld",&t);

    int n,i;

    while(t--)
    {
        vector <int> v,v1;
        map <int,int> m;

        scanf("%lld",&n);

        for(i=0;i<n;i++)
        {
            scanf("%lld",&a[i]);

            m[a[i]]++;

            if(m[a[i]] == 2)
                v.push_back(a[i]);

             if(m[a[i]] == 4)
                v1.push_back(a[i]);
        }

        if(v1.size() > 0)
        {
            cout << v1[0] << " " << v1[0] << " " << v1[0] << " " << v1[0] << endl;
            continue;
        }

        sort(v.begin(),v.end());

        double ant = 1e12;
        int ans = -1;
        
        for(i=1;i<v.size();i++)
        {
            int x = 2*(v[i]+v[i-1]);
            x = x*x;
            int y = v[i]*v[i-1];
            double temp = (1.0*x)/y;

            if(ant > temp)
            {
                ant = temp;
                ans = i;
            }
        }

        cout << v[ans] << " " << v[ans] << " " << v[ans-1] << " " << v[ans-1] << endl;
    }
}