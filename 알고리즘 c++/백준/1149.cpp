#include <iostream>

using namespace std;
int dp[1001][4];
int dp_1[1001][4];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	long long minim;
	cin>>n;
	
	for(int i=0;i<n;i++){
		for(int j=0;j<3;j++){
			cin>>dp[i][j];
		}
	}
	for(int i=0;i<n;i++){
		dp_1[i][0]=min(dp_1[i-1][1]+dp[i][0],dp_1[i-1][2]+dp[i][0]);
		dp_1[i][1]=min(dp_1[i-1][0]+dp[i][1],dp_1[i-1][2]+dp[i][1]);
		dp_1[i][2]=min(dp_1[i-1][1]+dp[i][2],dp_1[i-1][0]+dp[i][2]);
	}
	minim=min(dp_1[n-1][0],min(dp_1[n-1][1],dp_1[n-1][2]));
	cout<<minim;
	
	return 0;
}
