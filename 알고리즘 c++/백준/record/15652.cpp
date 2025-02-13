#include <iostream>

using namespace std;
int n,m;
int arr[9];
void Solve(int start,int index){
	if(index==m){
		for(int i=0;i<m;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
		
		return;
	}
	for(int i=start;i<=n;i++){
		arr[index]=i;
		Solve(i,index+1);
	}
	
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	
	Solve(1,0);
	
	return 0;
}
