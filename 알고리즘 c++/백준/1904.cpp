#include <iostream>

using namespace std;
int arr[1000001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	arr[0]=1;arr[1]=2;	
	for(int i=2;i<n;i++){
		arr[i]=(arr[i-1]+arr[i-2])%15746;
	}
	cout<<arr[n-1]%15746;

	return 0;
}
