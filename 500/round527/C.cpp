#include <bits/stdc++.h>

using namespace std;

int a[100010];
vector <string> v;
string ss[100010];

bool myfun(string x, string y)
{
    return x.size() < y.size();
}

int32_t main()
{
    int n;
    cin >> n;

    int m = 2*n-2;

    for(int i=0;i<2*n-2;i++)
    {
        string s;
        cin >> s;

        ss[i] = s;

        v.push_back(s);
    }

    sort(v.begin(),v.end(),myfun);

    string s1,s2;
    s1 = s2 = v[m-1];
    s1 = v[m-2][0] + s1;
    s2 += v[m-2][v[m-2].size()-1];

    string ans = "";

    for(int j=0;j<n-1;j++)
    {
        ans += s1[j];

        for(int i=0;i<m;i++)
        {
            if(ans == ss[i] && a[i] == 0)
            {
                a[i] = 1;
                break;
            }
        }
    }

    ans = "";

    for(int j=n-1;j>0;j--)
    {
        ans += s1[j];
        string ans1 = ans;
        reverse(ans1.begin(),ans1.end());

        for(int i=0;i<m;i++)
        {
            if(ans1 == ss[i] && a[i] == 0)
            {
                a[i] = 2;
                break;
            }
        }
    }

    bool flag = true;

    for(int i=0;i<m;i++)
    {
        if(a[i] == 0)
        {
            flag = false;
            break;
        }
    }

    if(flag)
    {
        for(int i=0;i<m;i++)
            cout << (a[i] == 1 ? "P" : "S");
        return 0;
    }

    ans = "";
    memset(a,0,100010*sizeof(a[0]));

    for(int j=0;j<n-1;j++)
    {
        ans += s2[j];

        for(int i=0;i<m;i++)
        {
            if(ans == ss[i] && a[i] == 0)
            {
                a[i] = 1;
                break;
            }
        }
    }

    ans = "";

    for(int j=n-1;j>0;j--)
    {
        ans += s2[j];
        string ans1 = ans;
        reverse(ans1.begin(),ans1.end());

        for(int i=0;i<m;i++)
        {
            if(ans1 == ss[i] && a[i] == 0)
            {
                a[i] = 2;
                break;
            }
        }
    }

    for(int i=0;i<m;i++)
        cout << (a[i] == 1 ? "P" : "S");
}