#include <iostream>

using namespace std;
int arr[101];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m; cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int M=0;
	for(int i=0;i<n;i++){
		for(int j=i+1;j<n;j++){
			for(int f=j+1;f<n;f++){
				int sum=arr[i]+arr[j]+arr[f];
				if(sum>M&&sum<=m){
					M=sum;
				}
			}
		}
	}
	cout<<M;
	
	return 0;
}
