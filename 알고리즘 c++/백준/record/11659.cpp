#include <iostream>

using namespace std;
int arr[100005];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m; cin>>n>>m;
	arr[0]=0;
	int sum=0;
	for(int i=1;i<=n;i++){
		int index; cin>>index;
		sum+=index;
		arr[i]=sum;
	}
	for(int i=0;i<m;i++){
		int i1,i2; cin>>i1>>i2;
		cout<<arr[i2]-arr[i1-1]<<"\n";
	}
	
	return 0;
}
