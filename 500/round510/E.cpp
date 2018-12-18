#include <bits/stdc++.h>

#define int long long

using namespace std;

vector <pair<int,pair<int,int> > > v;
int b[1010][1010];

int32_t main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin >> b[i][j];
            v.push_back({b[i][j],{i,j}});
        }
    }

    int r1,r2,c1,c2,ev,k;
    r1 = r2 = c1 = c2 = ev = 0;
    k = 1;
    
    for(auto i:v)
    {
        int temp = ev + k*i.second.first*i.second.first + k*i.second.second*i.second.second;
        temp += 
        r1 += i.second.first;
        r2 += i.second.first * i.second.first;
        c1 += i.second.second;
        c2 += i.second.second * i.second.second;
    }

}