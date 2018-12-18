#include<iostream>
#include <set>
#include <map>
#include <list>
#include <queue>
#include <stack>
#include <cmath>
#include <string>
#include <vector>
#include <cstring>
#include <cstdio>
#include <utility>
#include <algorithm>
#include <functional>
using namespace std;
char s[200010];
int l, i, j,dp[200010];
int d(char c) {
	return c - 48;
}
int main() {
    freopen("input.txt","r",stdin);
    freopen("out1.txt","w",stdout);
    int tt;
    cin >> tt;
    cout << tt << endl;
 while(tt--){       scanf("%s", s);
        l = strlen(s);
        memset(dp, 0, sizeof(dp));
        for (i = 0; i < l; i++) {
            if ((s[i] - 48) % 3 == 0)dp[i] = max(dp[i], dp[i - 1] + 1);
            if (i>0&&(s[i] + s[i - 1] - 48 * 2) % 3 == 0)dp[i] = max(dp[i], dp[i - 2] + 1);
            if (i>1&&(s[i] + s[i - 1] + s[i - 2] - 48 * 3) % 3 == 0)dp[i] = max(dp[i], dp[i - 3] + 1);
            dp[i] = max(dp[i], dp[i - 1]);
        }
        printf("%d\n", dp[l-1]);}
}