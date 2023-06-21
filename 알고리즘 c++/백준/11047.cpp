#include <iostream>

using namespace std;
int arr[10];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=k/arr[n-i-1];
		k%=arr[n-i-1];
	}
	cout<<sum;
	
	return 0;
}
