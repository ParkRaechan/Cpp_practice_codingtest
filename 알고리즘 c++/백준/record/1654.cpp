#include <iostream>

using namespace std;
int arr[10001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k,n,M=0;
	cin>>k>>n;
	for(int i=0;i<k;i++){
		cin>>arr[i];
		if(arr[i]>M) M=arr[i];
	}
	
	long long left=1,right=M;	long long result=0;
	while(left<=right){
		long long index=0,mid=(left+right)/2;
		for(int i=0;i<k;i++){
			index+=arr[i]/mid;
		}
		if(index>=n){
			left=mid+1;
			result=max(result,mid);
		}else{
			right=mid-1;
		}
	}
	cout<<result;
	
	return 0;
}
