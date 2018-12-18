#include "bits/stdc++.h"
using namespace std;
typedef long long ll;
#define pb push_back
#define mp make_pair

const int M=1e9+7;
ll powmod(ll a,ll b) {ll res=1;a%=M; assert(b>=0); for(;b;b>>=1){if(b&1)res=res*a%M;a=a*a%M;}return res%M;}/* a^b%M */
const int N=2e5+10;
int c[N];
int deg[N], par[N];
vector<int>v[N];
bool mark[N];
int mini;
void dfs(int s) {
	mark[s]=1;
	mini=min(mini, c[s]);
	for(int i=0;i<v[s].size();++i) {
		int ch=v[s][i];
		if(!mark[ch])
			dfs(ch);
	}
}

int main() {
    int n;
    ll ans=0;
    cin>>n;
    for(int i=1;i<=n;++i)
    	scanf("%d", &c[i]);
    for(int i=1;i<=n;++i) {
    	scanf("%d", &par[i]);
    	if(i==par[i]) {
    		ans+=c[i];
    		mark[i]=1;
    	}
    	else {
    		deg[par[i]]++;
    		v[i].pb(par[i]);
    	}
    }
    queue<int>q;
    for(int i=1;i<=n;++i) {
    	if(deg[i]==0)
    		q.push(i);
    }
	while(!q.empty()) {
		int x = q.front();
		q.pop();
		mark[x]=1;
		deg[par[x]]--;
		if(deg[par[x]]==0)
			q.push(par[x]);
	}
	//cout<<ans<<endl;
	for(int i=1;i<=n;++i) {
		if(!mark[i]) {
			mini=M;
			dfs(i);
	//		cout<<i<<" "<<mini<<endl; 
			ans+=mini;
		}
	}
	cout<<ans<<endl;
	return 0;
}