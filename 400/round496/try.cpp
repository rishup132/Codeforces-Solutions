#include <bits/stdc++.h>
#define forn(i,n) for(int i=0;i<n;i++)
using namespace std;

int a[100010];
int n,m;

long long greaterCount(int m) {
    vector<int> s(2 * n + 1,0);
    int sum = n;
    long long result = 0;
    s[sum] = 1;
    long long add = 0;
    forn(i, n) {
        if (a[i] < m)
            sum--, add -= s[sum];
        else
            add += s[sum], sum++;
        result += add;
        s[sum]++;
    }
    return result;
}

int main()
{
    cin >> n >> m;
    forn(i, n)
        cin >> a[i];
    cout << greaterCount(m) - greaterCount(m + 1) << endl;
}