#include <iostream>

using namespace std;

int arr[1001],dp[1001],ans;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	
	for(int i=1;i<=n;i++){
		int MaxI=0;
		for(int j=1;j<i;j++){
			if(arr[i]<arr[j]){
				MaxI=max(MaxI,dp[j]);
			}
		}
		dp[i]=MaxI+1;
		ans=max(ans,dp[i]);
	}
	cout<<ans;
	
	return 0;
}
