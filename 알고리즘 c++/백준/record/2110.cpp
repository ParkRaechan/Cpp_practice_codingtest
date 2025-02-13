#include <iostream>
#include <algorithm>
typedef long long ll;
using namespace std;
ll arr[200001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n,c,M=0;
	cin>>n>>c;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>M) M=arr[i];
	}
	sort(arr,arr+n);
	ll left=1,right=M,result;
	while(left<=right){
		ll mid=(left+right)/2,index=0,number=0;
		for(int i=0;i<n;i++){
			if(arr[i]>=index){
				number++;
				index=arr[i]+mid;
			}
		}
		if(number>=c){
			left=mid+1;
			result=mid;
		}else right=mid-1;
	}
	cout<<result;
	
	return 0;
}
