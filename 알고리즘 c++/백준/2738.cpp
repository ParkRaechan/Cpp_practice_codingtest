#include <iostream>

using namespace std;
int arr[101][101];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m; cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int index; cin>>index;
			cout<<arr[i][j]+index<<" ";
		}
		cout<<"\n";
	}
	
	return 0;
}
