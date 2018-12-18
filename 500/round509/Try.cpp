#include<bits/stdc++.h>

#define ll long long int
#define mp make_pair
#define pb push_back
using namespace std;

int main() {
   ll n,m,d;
    scanf("%lld%lld%lld",&n,&m,&d);
    vector<ll> v(n);
    multiset < ll > s;
    for (int i = 0; i < n; ++i) {
        scanf("%lld",&v[i]);
        s.insert(v[i]);
    }
    unordered_map <ll , ll > ans;
    ans[*s.begin()] = 1;
    auto it = s.begin();
    ll day = 1;
    //printf("here");
    while(s.size() > 0){
        auto it1 = it;
        s.erase(it1);
        it = s.lower_bound(*it + d + 1);
        if(it == s.end()){
            if(s.size() > 0) {
                it = s.begin();
                day++;
                ans[*it] = day;
            }
        }
        else{
            ans[*it] = day;
        }
        //printf("%lld - > %lld\n",*it , day);
    }
    printf("%lld\n",day);
    /*for (auto k = ans.begin(); k != ans.end() ; ++k) {
        for (int i = 0; i < ans[k->first].size(); ++i) {
            printf("%lld ",ans[k->first][i]);
        }
        printf("\n");
    }*/
    //printf("%lld",ans[3][0]);
    for (int i = 0; i < n; ++i) {
        printf("%lld ",ans[v[i]]);
    }
    return 0;
}