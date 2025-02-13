#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int arr[500001];
int number1[10000001];
int number2[10000001];
int check(int x) {
	int left=0,right=n-1;
	while(left<=right){
		int mid=(left+right)/2;
		if(arr[mid]==x){
			if(arr[mid]<0) return number2[(-1)*arr[mid]];
			else return number1[arr[mid]];
		}
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
		if(arr[i]<0) number2[(-1)*arr[i]]++;
		else number1[arr[i]]++;
	}
	sort(arr,arr+n);
	cin>>m;
	for(int i = 0; i < m; i++){
		int index;	cin>>index;
		cout<<check(index)<<' ';
	}
	return 0;
}
