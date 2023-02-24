#include <iostream>

using namespace std;

int arr[1001],dp[1001],N;

int main(int argc,const char *argv[]) {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
	
	cin>>N;
	for(int i=1;i<=N;i++){
		cin>>arr[i];
	}
	
	int Max=0;
	for(int i=1;i<=N;i++){
		dp[i]=arr[i];
		for(int j=1;j<i;j++){
			if(arr[j]<arr[i] && dp[i] < dp[j]+arr[i]){
				dp[i]=dp[j]+arr[i];
			}
		}
		if(Max<dp[i]) Max=dp[i];
	}
	cout<<Max;
	
	return 0;
}
