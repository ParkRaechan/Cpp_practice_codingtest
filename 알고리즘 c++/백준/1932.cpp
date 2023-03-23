#include <iostream>

using namespace std;

long long dp[501][501];
long long dp_1[501][501];long long m;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<=i;j++){
			cin>>dp[i][j];
			if(i==0){	
				dp_1[i][j]=dp[i][j];
			}else if(j==0){
				dp_1[i][j]=dp_1[i-1][j]+dp[i][j];
			}else{
				dp_1[i][j]=max(dp_1[i-1][j-1],dp_1[i-1][j])+dp[i][j];
			}
			m=max(m,dp_1[i][j]);
		}
	}
	
	cout<<m;
	
	return 0;
}
