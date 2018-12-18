#include <string>
#include <queue>
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
using namespace std;


int dp[33][33][55];


int calc(int r,int c,int s){
	if(r*c<s)return 1<<30;
	if(dp[r][c][s]!=-1)return dp[r][c][s];
	if(s==0)return 0;
	if(r*c==s)return 0;
	
	dp[r][c][s]=1<<30;
	for(int i=0;i<=s;i++){
		for(int j=1;j<r;j++){
			dp[r][c][s]=min(dp[r][c][s],calc(j,c,i) + calc(r-j,c,s-i) + c*c);
			dp[r][c][s]=min(dp[r][c][s],calc(j,c,s-i) + calc(r-j,c,i) + c*c);
		}

		for(int j=1;j<c;j++){
			dp[r][c][s]=min(dp[r][c][s],calc(r,j,i) + calc(r,c-j,s-i) + r*r);
			dp[r][c][s]=min(dp[r][c][s],calc(r,j,s-i) + calc(r,c-j,i) + r*r);
		}
	}
	return dp[r][c][s];
}
int main(){
	freopen("in.txt","r",stdin);
    freopen("o2.txt","w",stdout);
	for(int i=0;i<33;i++){
		for(int j=0;j<33;j++){
			for(int k=0;k<55;k++){
				dp[i][j][k]=-1;
			}
		}
	}
	int T;
	cin>>T;
	int r,c,s;
	while(T--){
		cin>>r>>c>>s;
		cout<<calc(r,c,s)<<endl;
	}
}