#include <iostream>
#include <algorithm>
using namespace std;
int arr[1001];
int result;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	for(int i=0;i<n;i++){
		int index=0;
		for(int j=0;j<=i;j++){
			index+=arr[j];
		}
		result+=index;
	}
	cout<<result;
	
	return 0;
}
