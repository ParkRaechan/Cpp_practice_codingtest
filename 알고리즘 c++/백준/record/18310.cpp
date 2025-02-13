#include <iostream>
#include <algorithm>
using namespace std;
int arr[200001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	if(n%2!=0){
		cout<<arr[n/2];
	}else cout<<arr[n/2-1];
	
	return 0;
}
