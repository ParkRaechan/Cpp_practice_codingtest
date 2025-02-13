#include <iostream>

using namespace std;
int arr[41][2];
int fibonacci(int n,int index){
	if(arr[n][index]!=-1) return arr[n][index];
	
	return arr[n][index]=fibonacci(n-1,index)+fibonacci(n-2,index);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	for(int i=0;i<41;i++){
		arr[i][0]=-1; arr[i][1]=-1;
	}
	arr[1][1]=1; arr[1][0]=0; arr[0][1]=0; arr[0][0]=1;
	while(t--){
		int n; cin>>n;
		cout<<fibonacci(n,0)<<" "<<fibonacci(n,1)<<"\n";
	}
	
	return 0;
}
