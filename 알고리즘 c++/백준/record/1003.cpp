#include <iostream>

using namespace std;
int dp[41];
int dp1(int x){
	if(dp[x]!=0) return dp[x];
	return dp[x]=dp1(x-1)+dp1(x-2);
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,n;
	cin>>t;
	dp[1]=1;dp[2]=1;
	for(int i=0;i<t;i++){
		cin>>n;
		if(n==0){
			cout<<"1 "<<"0\n";
		}else if(n==1){
			cout<<"0 "<<"1\n";
		}else{
			cout<<dp1(n-1)<<" "<<dp1(n)<<"\n";
		}
	}
	
	return 0;
}
