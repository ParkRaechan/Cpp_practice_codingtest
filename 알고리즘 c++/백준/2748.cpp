#include <iostream>

using namespace std;
long long dp[91];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	dp[0]=0;dp[1]=1;
	for(int i=2;i<=n;i++){
		dp[i]=dp[i-2]+dp[i-1];
	}
	cout<<dp[n];
	
	return 0;
}
