#include <iostream>

using namespace std;
int arr[101];
int visited[101][101];
bool vis[101];
int n,m,t,p;
bool bf=false;
int Solve(int d,int are,int t_id){
	if(t_id>t) return 0;
	if(bf==true) return 0;
	if(d>m) return 0;
	if(d==m){
		bf=true; return 1;
	}
	if(visited[are][t_id]!=0) return visited[are][t_id];
	
	
	if(are<99){
		if(vis[are+1]==false){
			vis[are+1]=true;
			visited[are+1][t_id+1]=visited[are+1][t_id+1]+Solve(d+arr[are+1],are+1,t_id+1);
			vis[are+1]=false;
		}
		visited[are+1][t_id+1]=Solve(d,are+1,t_id+1);
	}
	if(are>0){
		if(visited[are-1]==false){
			vis[are-1]=true;
			visited[are-1][t_id+1]=Solve(d+arr[are-1],are-1,t_id+1);
			vis[are-1]=false;
		}
		visited[are-1][t_id+1]=Solve(d,are-1,t_id+1);
	}
	visited[are]=0;
	
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m>>t;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	cin>>p;
	Solve(arr[p-1],p-1,1);
	if(bf) cout<<"YES";
	else cout<<"NO";
	
	return 0;
}
