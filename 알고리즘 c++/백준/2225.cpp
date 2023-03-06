#include <iostream>

using namespace std;

long long dp[201][201];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,K;
	cin>>N>>K;
	
	for(int i=0;i<=N;i++){
		dp[1][i]=1;
	}
	for(int i=1;i<=K;i++){
		dp[i][0]=1;
	}
	for(int i=2;i<=K;i++){
		for(int j=1;j<=N;j++){
			for(int q=0;q<=j;q++){
				dp[i][j]+=dp[i-1][q]%1000000000;
			}
		}
	}
	
	cout<<dp[K][N]%1000000000;
	
	return 0;
}
