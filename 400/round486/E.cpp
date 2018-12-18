#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

vector <int> v,v1;
map <int,int> m;

int main()
{
    ll n;
    cin >> n;

    ll temp = n;

    while(temp)
    {
        v1.push_back(temp%10);
        m[temp%10]++;
        temp /= 10;
    }

    int ans = 1000,temp1;
    int rr,qq;

    v = v1;

    if(m[0] > 1)
    {
        temp1 = 0;

        for(int i=0;i<v.size();i++)
        {
            if(v[i] == 0)
            {
                temp1 += i;

                for(int j=i;j>0;j--)
                    v[j] = v[j-1];
                v[0] = 0;

                break;
            }
        }

        for(int i=1;i<v.size();i++)
        {
            if(v[i] == 0)
            {
                temp1 += i;

                for(int j=i;j>1;j--)
                    v[j] = v[j-1];
                v[1] = 0;

                break;
            }
        }

        for(int i=v.size()-1;i>1;i--)
        {
            if(v[i] != 0)
            {
                temp1 += (v.size()-1-i);
                v[v.size()-1] = v[i];
                break;
            }
        }

        if(v[v.size()-1] != 0)
            ans = min(ans,temp1-1);
    }

    v = v1;

    if(m[2] > 0 && m[5] > 0)
    {
        temp1 = 0;

        for(int i=0;i<v.size();i++)
        {
            if(v[i] == 5)
            {
                temp1 += i;

                for(int j=i;j>0;j--)
                    v[j] = v[j-1];
                v[0] = 5;

                break;
            }
        }

        for(int i=1;i<v.size();i++)
        {
            if(v[i] == 2)
            {
                temp1 += i;

                for(int j=i;j>1;j--)
                    v[j] = v[j-1];
                v[1] = 2;

                break;
            }
        }

        for(int i=v.size()-1;i>1;i--)
        {
            if(v[i] != 0)
            {
                temp1 += (v.size()-1-i);
                v[v.size()-1] = v[i];
                break;
            }
        }

        if(v[v.size()-1] != 0)
            ans = min(ans,temp1-1);
    }

    v = v1;

    if(m[7] > 0 && m[5] > 0)
    {
        temp1 = 0;

        for(int i=0;i<v.size();i++)
        {
            if(v[i] == 5)
            {
                temp1 += i;

                for(int j=i;j>0;j--)
                    v[j] = v[j-1];
                v[0] = 5;

                break;
            }
        }

        for(int i=1;i<v.size();i++)
        {
            if(v[i] == 7)
            {
                temp1 += i;

                for(int j=i;j>1;j--)
                    v[j] = v[j-1];
                v[1] = 7;

                break;
            }
        }

        for(int i=v.size()-1;i>1;i--)
        {
            if(v[i] != 0)
            {
                temp1 += (v.size()-1-i);
                v[v.size()-1] = v[i];
                break;
            }
        }

        if(v[v.size()-1] != 0)
            ans = min(ans,temp1-1);
    }

    v = v1;

    if(m[0] > 0 && m[5] > 0)
    {
        temp1 = 0;

        for(int i=0;i<v.size();i++)
        {
            if(v[i] == 0)
            {
                temp1 += i;

                for(int j=i;j>0;j--)
                    v[j] = v[j-1];
                v[0] = 0;

                break;
            }
        }

        for(int i=1;i<v.size();i++)
        {
            if(v[i] == 5)
            {
                temp1 += i;

                for(int j=i;j>1;j--)
                    v[j] = v[j-1];
                v[1] = 5;

                break;
            }
        }

        for(int i=v.size()-1;i>1;i--)
        {
            if(v[i] != 0)
            {
                temp1 += (v.size()-1-i);
                v[v.size()-1] = v[i];
                break;
            }
        }

        if(v[v.size()-1] != 0)
            ans = min(ans,temp1-1);
    }

    if(ans == 1000)
        cout << -1 << endl;
    else
        cout << ans << endl;

    return 0;
}