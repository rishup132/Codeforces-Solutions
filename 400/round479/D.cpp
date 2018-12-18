#include <bits/stdc++.h>

#define ll long long

using namespace std;

map <pair<int,int>, ll int> m;
vector <pair <int,int> > v;

bool myfunc(pair<int,int> p1, pair<int,int> p2)
{
    if(p1.first < p2.first)
        return false;
    else if(p1.first > p2.first)
        return true;
    else if(p1.second < p2.second)
        return true;
    else
        return false;
}

int main()
{
    int n,count1,count2;
    cin >> n;

    ll int x,temp;

    for(int i=0;i<n;i++)
    {
        cin >> x;

        count1 = 0;
        temp = x;

        while(temp%3 == 0)
        {
            count1++;
            temp /= 3;
        }

        count2 = 0;
        temp = x;

        while(temp%2 == 0)
        {
            count2++;
            temp /= 2;
        }

        m[make_pair(count1,count2)] = x;
        v.push_back(make_pair(count1,count2));
    }

    sort(v.begin(),v.end(),myfunc);

    for(int i=0;i<v.size();i++)
        cout <<  m[v[i]] << " ";
    cout << endl;
}
