#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

vector<ll > v1,v2,v3;

int main()
{
    int n;
    cin >> n;

    ll x;
    char y;

    for(int i=0;i<n;i++)
    {
        cin >> x >> y;

        if(y == 'R')
            v1.push_back(x);
        
        if(y == 'B')
            v2.push_back(x);

        if(y == 'P')
            v3.push_back(x);
    }

    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    sort(v3.begin(),v3.end());

    int u,v,w;
    u = v1.size();
    v = v2.size();
    w = v3.size();

    ll ans = 0;

    if(w == 0)
    {
        if(u != 0)
            ans += abs(v1[u-1] - v1[0]);

        if(v != 0)
            ans += abs(v2[v-1] - v2[0]);
    }
    else
    {
        if(u != 0 && v1[0] < v3[0])
            ans += abs(v3[0]-v1[0]);
        
        if(u != 0 && v1[u-1] > v3[w-1])
            ans += abs(v1[u-1]-v3[w-1]);

        if(v != 0 && v2[0] < v3[0])
            ans += abs(v3[0]-v2[0]);

        if(v != 0 && v2[v-1] > v3[w-1])
            ans += abs(v2[v-1]-v3[w-1]);

        for(int i=1;i<w;i++)
        {
            int it;
            ll ans1 = 0,ans2 = 0;
            vector <ll > f,e;

            f.push_back(v3[i-1]);

            it = upper_bound(v1.begin(),v1.end(),v3[i-1]) - v1.begin();

            while(it < u && v1[it] < v3[i])
                f.push_back(v1[it++]);

            f.push_back(v3[i]);
            sort(f.begin(),f.end());

            for(int j=1;j<f.size();j++)
            {
                if(abs(f[j]-f[j-1]) > ans1)
                    ans1 = abs(f[j]-f[j-1]);
            }

            e.push_back(v3[i-1]);

            it = upper_bound(v2.begin(),v2.end(),v3[i-1]) - v2.begin();

            while(it < v && v2[it] < v3[i])
                e.push_back(v2[it++]);

            e.push_back(v3[i]);
            sort(e.begin(),e.end());

            for(int j=1;j<e.size();j++)
            {
                if(abs(e[j]-e[j-1]) > ans2)
                    ans2 = abs(e[j]-e[j-1]);
            }

            ans += min(2*abs(v3[i]-v3[i-1]),3*abs(v3[i]-v3[i-1])-ans1-ans2);
        }
    }

    cout << ans << endl;
}

/*if(u != 0)
        {
            if(v1[0] < v3[0])
                ans += abs(v3[0]-v1[0]);
            
            if(v1[u-1] > v3[w-1])
                ans += abs(v1[u-1]-v3[w-1]);

            for(int i=1;i<w;i++)
            {
                int it1;
                ll ans1 = 1e18;
                
                it1 = upper_bound(v1.begin(),v1.end(),v3[i-1]) - v1.begin();

                if(it1 != u && v1[it1] < v3[i])
                    ans1 = min(ans1,abs(v3[i]-v1[it1]));

                //cout << it1 << " " << ans1 << endl;

                it1 = upper_bound(v1.begin(),v1.end(),v3[i]) - v1.begin();
                it1--;

                if(it1 != -1 && v1[it1] > v3[i-1])
                    ans1 = min(ans1,abs(v3[i-1]-v1[it1]));

                //cout << it1 << " " << ans1 << endl;

                if(ans1 != 1e18)
                    ans += ans1;
            }
        }

        if(v != 0)
        {
            if(v2[0] < v3[0])
                ans += abs(v3[0]-v2[0]);

            if(v2[v-1] > v3[w-1])
                ans += abs(v2[v-1]-v3[w-1]);

            cout << ans << endl;

            for(int i=1;i<w;i++)
            {
                int it1;
                ll ans1 = 1e18;

                it1 = upper_bound(v2.begin(),v2.end(),v3[i-1]) - v2.begin();
                
                if(it1 != v && v2[it1] < v3[i])
                    ans1 = min(ans1,abs(v3[i]-v2[it1]));

                cout << it1 << " " << ans1 << endl;

                it1 = upper_bound(v2.begin(),v2.end(),v3[i]) - v2.begin();
                it1--;
                
                if(it1 != -1 && v2[it1] > v3[i-1])
                    ans1 = min(ans1,abs(v3[i-1]-v2[it1]));

                cout << it1 << " " << ans1 << endl;

                if(ans1 != 1e18)
                    ans += ans1;
            }
        }*/