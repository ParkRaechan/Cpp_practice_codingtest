#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	int dp[n+1];
	
	dp[0]=0;
	dp[1]=0;
	dp[2]=1;
	dp[3]=1;
	
	for(int i=4;i<=n;i++){
		dp[i]=dp[i-1]+1;
		if(i%3==0) dp[i]=min(dp[i],dp[i/3]+1);
		if(i%2==0) dp[i]=min(dp[i],dp[i/2]+1);
	}
	cout<<dp[n]<<"\n";
	
	return 0;
}
