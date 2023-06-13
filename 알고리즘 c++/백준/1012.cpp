#include <iostream>
#include <queue>
using namespace std;
queue<pair<int,int>> q;
int m,n,result=0;
int graph[51][51];
int a[4]={1,0,0,-1};
int b[4]={0,1,-1,0};
bool range(int x,int y){
	if(x<=m-1&&y<=n-1) return true;
	return false;
}
void bfs(){
	bool tr=false;
	while(!q.empty()){
		int x=q.front().first;	int y=q.front().second;	q.pop();
		if(graph[x][y]==1){
			tr=true;
			graph[x][y]=-1;
			for(int i=0;i<4;i++){
				int rx=x+a[i];	int ry=y+b[i];
				if(range(rx,ry)){
					q.push(pair<int,int>(rx,ry));
				}
			}
		}	
	}
	if(tr==true) result++;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,k;	int x,y;
	cin>>t;
	while(t--){
		result=0;
		cin>>m>>n>>k;
		fill(&graph[0][0],&graph[50][51],0);
		for(int i=0;i<k;i++){
			cin>>x>>y;
			graph[x][y]=1;
		}
		for(int i=0;i<m;i++){
			for(int j=0;j<n;j++){
				if(graph[i][j]==1) {
					q.push(pair<int,int>(i,j));
					bfs();
				}
			}
		}
		cout<<result<<"\n";
	}
	
	
	return 0;
}
