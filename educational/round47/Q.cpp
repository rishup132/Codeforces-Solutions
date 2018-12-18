#include <iostream>
#include <map>
#include <string>
#include <vector>
#include<algorithm>
#include <iomanip>
#include <set>
#include <bitset>
#include <stdio.h>

using namespace std;

#define int long long



#undef int
int main() {
#define int long long
    int n, m;
    cin >> n >> m;
    int ans = 0;
    int x[m], d[m];
    for (int i = 0; i < m; ++i) {
        cin >> x[i] >> d[i];
    }
    for (int i = 0; i < m; ++i) {
        ans += x[i];
    }
    ans *= n;
    for (int i = 0; i< m; ++i) {
        int dist = 0;
        if (d[i] >= 0) {
            dist = n*(n - 1)/2;
        }
        else {
            int k = n / 2 + n %2;
            dist = ((k - 1) * k + (n - k)*(n - k + 1)) / 2;
        }
        ans += d[i]*dist;
    }
    cout << fixed << setprecision(7) << (double)ans/(double)n;
    return 0;
}