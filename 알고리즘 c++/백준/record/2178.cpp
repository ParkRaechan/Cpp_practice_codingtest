#include <iostream>
#include <string>
#include <queue>
using namespace std;
int graph[101][101];int n,m;
struct coordin{
	int y,x;
};
queue<coordin> q;
int dy[4]={0,1,0,-1};
int dx[4]={1,0,-1,0};
int result=0;
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
			if(rangeCheck(ry,rx)==true&&graph[ry][rx]==1){
				graph[ry][rx]=graph[y][x]+1;
				if(ry==(n-1)&&rx==(m-1)){
					cout<<graph[ry][rx];
					return;
				}
				q.push({ry,rx});
			}
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string sente;
	cin>>n>>m;
	
	for(int i=0;i<n;i++){
		cin>>sente;
		for(int j=0;j<m;j++){
			string s="";	s+=sente[j];
			graph[i][j]=stoi(s);
			
		}
	}
	q.push({0,0});
	bfs();
	
	return 0;
}
