#include <iostream>
#include <algorithm>
using namespace std;
int arr[100001];
int n;
void Solve(int d){
	int start=0;
	int end=n-1;
	long long mid;
	
	while(end>=start){
		mid=(start+end)/2;
		if(arr[mid]==d){
			cout<<"1\n";return;
		}else if(arr[mid]>d){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	cout<<"0\n";
	
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m;
	cin>>n;
	for(int i=0;i<n;i++){
		int index;cin>>index;
		arr[i]=index;
	}
	sort(arr,arr+n);
	cin>>m;
	for(int i=0;i<m;i++){
		int index;cin>>index;
		Solve(index);
	}
	
	return 0;
}
