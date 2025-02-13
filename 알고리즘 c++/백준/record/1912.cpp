#include <iostream>

using namespace std;

int n;
int num[100001];
int dp[100001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int M=-1001;
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>num[i];
	}
	for(int i=1;i<=n;i++){
		if(dp[i-1]+num[i]<num[i]){
			dp[i]=num[i];
		}
		else{
			dp[i]=dp[i-1]+num[i];
		}
		
		if(dp[i]>=M){
			M=dp[i];
		}
	}
	cout<<M;
	
	return 0;
}
