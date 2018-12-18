#include <bits/stdc++.h>
#define error(args...) { string _s = #args; replace(_s.begin(), _s.end(), ',', ' '); stringstream _ss(_s); istream_iterator<string> _it(_ss); err(_it, args); }

using namespace std;
void err(istream_iterator<string> it) {}
template<typename T, typename... Args>
void err(istream_iterator<string> it, T a, Args... args) {
    cerr << *it << " = " << a << endl;
    err(++it, args...);
}


typedef long long ll;

bool cmp(pair<int,int> p1, pair<int,int> p2){
    return p1.second < p2.second;
}
int main() {
    freopen("input.txt", "r", stdin);
    freopen("out2.txt", "w", stdout);

    int tt;
    cin >> tt;
    cout << tt << endl;

    while(tt--)
    
    {string str;
    cin >> str;
    int n = str.length();
    ll arr[n];
    for (int i = 0; i < n; ++i) {
        arr[i] = str[i]-'0';
    }
    std::vector<pair<int,int> > intervals;
    for (int i = 0; i < n; ++i) {
        ll sum = 0;
        for (int j = i; j < n ; ++j) {
            sum += arr[j];
            if(sum % 3 == 0){
                intervals.push_back({i,j});
                break;
            }
        }
    }
    //for (int i = 0; i < intervals.size(); ++i) {
      //  cout << intervals[i].first <<" "<<intervals[i].second<<"\n";
    //}
    sort(intervals.begin(),intervals.end(),cmp);
    if(intervals.size() > 0){
        ll ans = 1;
        int start = intervals[0].second;
        for (int i = 1; i < intervals.size(); ++i) {
            if(intervals[i].first > start){
                ans++;
                start = intervals[i].second;
            }
        }
        cout << ans << endl;
    }
    else {
        cout << "0" << endl;
    }}


    return 0;
}