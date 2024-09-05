#include <iostream>
#include <algorithm>
using namespace std;
int n,m;
int arr[9];
int ad[9];
bool visit[9];
void Solve(int index){
	if(index>=m){
		for(int i=0;i<m;i++){
			cout<<ad[i]<<" ";
		}cout<<"\n";
		return;
	}
	for(int i=0;i<n;i++){
		if(!visit[i]){
			visit[i]=true;
			ad[index]=arr[i];
			Solve(index+1);
			visit[i]=false;
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n);
	Solve(0);
	
	return 0;
}
