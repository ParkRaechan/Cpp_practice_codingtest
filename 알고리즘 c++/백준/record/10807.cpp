#include <iostream>

using namespace std;
int arr[101];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int v; cin>>v;
	int result=0;
	for(int i=0;i<n;i++){
		if(arr[i]==v) result++;
	}
	cout<<result;
	
	return 0;
}
