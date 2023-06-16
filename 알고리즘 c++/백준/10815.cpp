#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int arr[500001];
int check(int x) {
	int left=0,right=n-1;
	while(left<=right){
		int mid=(left+right)/2;
		if(arr[mid]==x) return 1;
		if(arr[mid]>x) right=mid-1;
		else left=mid+1;
	}
	return 0;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for(int i = 0; i < n; i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	cin>>m;
	for(int i = 0; i < m; i++){
		int index;	cin>>index;
		cout<<check(index)<<' ';
	}
	return 0;
}
