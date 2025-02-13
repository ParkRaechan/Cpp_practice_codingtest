#include <iostream>

using namespace std;
int N,M;
int arr[101];
void Solve(int i,int j){
	int index=j-i+1;
	if(index==1) return;
	
	int j_1=j;
	for(int d=i;d<=(i+j)/2;d++){
		int temp=arr[d];
		arr[d]=arr[j_1];
		arr[j_1]=temp;
		j_1--;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>N>>M;
	for(int i=1;i<=N;i++){
		arr[i]=i;
	}
	for(int d=0;d<M;d++){
		int i,j; cin>>i>>j;
		Solve(i,j);
	}
	for(int i=1;i<=N;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
