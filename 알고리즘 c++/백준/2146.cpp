#include <iostream>
#include <cstring>
#include <vector>
#include <queue>
using namespace std;
int n,answer;
int map_array[100][100];
bool visit[100][100];
int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};
struct land{
	int x,y;
};
vector<land> v;
int Compare(int a,int b){
	if(a<b) return a;
	return b;
}
void input(){
	answer=100000;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>map_array[i][j];
			if(map_array[i][j]==1){
				map_array[i][j]=-1;
				v.push_back({i,j});
			}
		}
	}
}
void makeLandlabel(int a,int b,int l){
	queue<land> q;
	q.push({a,b});
	visit[a][b]=true;
	map_array[a][b]=l;
	while(!q.empty()){
		int x=q.front().x;
		int y=q.front().y;
		q.pop();
		for(int i=0;i<4;i++){
			int nx=x+dx[i];
			int ny=y+dy[i];
			if(nx>=0&&ny>=0&&nx<n&&ny<n){
				if(visit[nx][ny]==false&&map_array[nx][ny]==-1){
					visit[nx][ny]=true;
					map_array[nx][ny]=l;
					q.push({nx,ny});
				}
			}
		}
	}
}
int bfs(int num){
	int result=0;
	queue<land> q;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(map_array[i][j]==num){
				visit[i][j]=true;
				q.push({i,j});
			}
		}
	}
	while(!q.empty()){
		int s=q.size();
		for(int i=0;i<s;i++){
			int x=q.front().x;
			int y=q.front().y;
			q.pop();
			for(int j=0;j<4;j++){
				int nx=x+dx[j];
				int ny=y+dy[j];
				if(nx>=0&&ny>=0&&nx<n&&ny<n){
					if(map_array[nx][ny]!=0&&map_array[nx][ny]!=num) return result;
					else if(map_array[nx][ny]==0&&visit[nx][ny]==false){
						visit[nx][ny]=true;
						q.push({nx,ny});
					}
				}
			}
		}
		result++;
	}
}
void solution(){
	int land_label=1;
	for(int i=0;i<v.size();i++){
		int x=v[i].x;
		int y=v[i].y;
		if(visit[x][y]==false){
			makeLandlabel(x,y,land_label);
			land_label++;
		}
	}
	for(int i=1;i<land_label;i++){
		answer=Compare(answer,bfs(i));
		memset(visit,false,sizeof(visit));
	}
	cout<<answer<<"\n";
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	input();
	solution();
	
	return 0;
}
