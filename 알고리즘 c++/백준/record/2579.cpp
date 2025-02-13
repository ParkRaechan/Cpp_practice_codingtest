#include <iostream>
#include <algorithm>
using namespace std;

int d[301];
int arr[301];
int n;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>d[i];
	}
	arr[1]=d[1];
	arr[2]=d[2]+d[1];
	for(int i=3;i<=n;i++){
		arr[i]=max(arr[i-3]+d[i-1]+d[i],arr[i-2]+d[i]);
	}
	cout<<arr[n];
	
	return 0;
}
