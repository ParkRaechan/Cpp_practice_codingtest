#include <iostream>
int n,m;
using namespace std;
bool vis[9];
int arr[9];
void Solve(int d,int j){
	
	if(d==m){
		for(int l=1;l<=m;l++){
			cout<<arr[l]<<" ";
		}
		cout<<"\n";
		return;
	}
	
	for(int i=1;i<=n;i++){
		if(!vis[i]){
			vis[i]=true;
			arr[d+1]=i;
			Solve(d+1,i);
			vis[i]=false;
		}
	}
	
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	for(int k=1;k<=n;k++){
		vis[k]=true;
		arr[1]=k;
		Solve(1,k);
		vis[k]=false;
	}
	
	return 0;
}
