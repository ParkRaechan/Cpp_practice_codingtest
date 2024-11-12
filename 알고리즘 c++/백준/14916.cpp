#include <iostream>

using namespace std;
int arr[100002];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	arr[1]=-1;arr[2]=1;arr[3]=-1;arr[4]=2;arr[5]=1;
	for(int i=6;i<=n;i++){
		int a=99999999,b=99999999;
		if(arr[i-2]!=-1){
			a=arr[i-2]+1;
		}
		if(arr[i-5]!=-1){
			b=arr[i-5]+1;
		}
		if(a==99999999&&b==99999999){
			arr[i]=-1;
		}else{
			arr[i]=min(a,b);
		}
	}
	cout<<arr[n];
	
	return 0;
}
