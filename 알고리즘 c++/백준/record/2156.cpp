#include <iostream>
#include <algorithm>
using namespace std;

int d[10001];
int arr[10001];
int n;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	
	for(int i=1;i<n+1;i++){
		cin>>d[i];
	}
	arr[1]=d[1];
	arr[2]=d[1]+d[2];
	for(int i=3;i<=n;i++){
		arr[i]=max(arr[i-1],max(arr[i-3]+d[i-1]+d[i],arr[i-2]+d[i]));
	}
	cout<<arr[n];
	
	return 0;
}
