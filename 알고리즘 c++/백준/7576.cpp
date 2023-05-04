#include <iostream>
#include <queue>
using namespace std;
int m,n,result=0;
int graph[1001][1001];
struct tomato{
	int y,x;
};
queue<tomato> q;
int dy[4]={0,1,0,-1};
int dx[4]={1,0,-1,0};
bool rangeCheck(int y,int x){
	return (x>=0&&y>=0&&x<m&&y<n);
}
void bfs(){
	while(!q.empty()){
		int y=q.front().y;
		int x=q.front().x;
		q.pop();
		for(int i=0;i<4;i++){
			int ry=y+dy[i];
			int rx=x+dx[i];
			if(rangeCheck(ry,rx)==true&&graph[ry][rx]==0){
				graph[ry][rx]=graph[y][x]+1;
				q.push({ry,rx});
			}
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int index;
	cin>>m>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>graph[i][j];
			if(graph[i][j]==1) q.push({i,j});
		}
	}
	bfs();
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(graph[i][j]==0){
				cout<<"-1\n";
				return 0;
			}
			if(result<graph[i][j]){
				result=graph[i][j];
			}
		}
	}
	cout<<result-1;
	
	return 0;
}
