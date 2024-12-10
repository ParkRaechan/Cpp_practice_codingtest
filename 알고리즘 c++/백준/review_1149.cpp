#include <iostream>

using namespace std;
int arr[1002][4];
int arr2[1002][4];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=3;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=1;i<=n;i++){
		arr2[i][1]=min(arr2[i-1][2]+arr[i][1],arr2[i-1][3]+arr[i][1]);
		arr2[i][2]=min(arr2[i-1][1]+arr[i][2],arr2[i-1][3]+arr[i][2]);
		arr2[i][3]=min(arr2[i-1][1]+arr[i][3],arr2[i-1][2]+arr[i][3]);
	}
	cout<<min(arr2[n][1],min(arr2[n][2],arr2[n][3]));
	
	return 0;
}
