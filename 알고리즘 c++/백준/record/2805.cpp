#include <iostream>

using namespace std;
int arr[1000001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n,m,M=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>M) M=arr[i];
	}
	long long left=1,right=M,sum=0;	long long result=0;
	while(left<=right){
		long long mid=(left+right)/2; sum=0;
		for(int i=0;i<n;i++){
			if(arr[i]>mid) sum+=arr[i]-mid;
		}
		if(sum>=m){
			left=mid+1;
			result=mid;
		}else{
			right=mid-1;
		}
	}
	cout<<result;
	
	return 0;
}
