#include <iostream>
#define big_n 1000000000
using namespace std;

int dp[101][10];

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	long long sum=0;
	cin>>n;
	
	for(int i=1;i<=9;i++){
		dp[1][i]=1;
	}
	for(int i=2;i<=n;i++){
		for(int j=0;j<=9;j++){
			if(j==0) dp[i][j]=dp[i-1][1];
			else if(j==9) dp[i][j]=dp[i-1][8];
			else dp[i][j]=(dp[i-1][j-1]+dp[i-1][j+1])%big_n;
		}
	}
	for(int i=0;i<=9;i++){
		sum+=dp[n][i];
	}
	
	cout<<sum%big_n;
	
	return 0;
}
