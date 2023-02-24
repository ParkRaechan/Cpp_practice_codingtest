#include <iostream>

using namespace std;

int arr[1001],dp_1[1001],dp_2[1001],dp_3[1001],ans;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
	}
	
	for(int i=1;i<=n;i++){
		int MaxI_1=0;
		for(int j=1;j<i;j++){
			if(arr[i]>arr[j]){
				MaxI_1=max(MaxI_1,dp_1[j]);
			}
		}
		dp_1[i]=MaxI_1+1;
	}
	for(int i=n;i>=1;i--){
		int MaxI_2=0;
		for(int j=n;j>i;j--){
			if(arr[i]>arr[j]){
				MaxI_2=max(MaxI_2,dp_2[j]);
			}
		}
		dp_2[i]=MaxI_2+1;
	}
	for(int i=1;i<=n;i++){
		dp_3[i]=dp_1[i]+dp_2[i]-1;
		ans=max(ans,max(dp_1[i],max(dp_3[i],dp_2[i])));
	}
	
	cout<<ans;
	
	return 0;
}
