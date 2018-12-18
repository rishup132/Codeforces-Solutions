#include <bits/stdc++.h>

#define ll long long
#define mod 1000000007

using namespace std;

bool isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    for (int i = 0; i <= N - M; i++) {
        int j;
 
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;
 
        if (j == M)
            return true;
    }
 
    return false;
}

pair<int,string> p[200];

int main()
{
    int n;
    cin >> n;

    for(int i=0;i<n;i++)
    {
        cin >> p[i].second;
        p[i].first = p[i].second.size();
    }

    sort(p,p+n);

    bool flag = true;

    for(int i=0;i<n-1;i++)
        flag = isSubstring(p[i].second,p[i+1].second);

    if(flag)
    {
        cout << "YES" << endl;

        for(int i=0;i<n;i++)
            cout << p[i].second << endl;
    }
    else
        cout << "NO" << endl;
}