#include <iostream>

using namespace std;
int n,m;
int arr[9];
bool visit[9];
void Solve(int d,int j){
	if(d==m){
		for(int i=1;i<=m;i++){
			cout<<arr[i]<<" ";
		}
		cout<<"\n";
	}	
	for(int i=j+1;i<=n;i++){
		if(!visit[i]){
			visit[i]=true;
			arr[d+1]=i;
			Solve(d+1,i);
			visit[i]=false;
		}
	}
	
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		visit[i]=true;
		arr[1]=i;
		Solve(1,i);
		visit[i]=false;
	}
	
	return 0;
}
