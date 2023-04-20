#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
using namespace std;
void bfs(bool vis[],vector<int> gra[],int start){
	if(vis[start]) return;
	queue<int> q;
	q.push(start);
	vis[start]=true;
	while(!q.empty()){
		int index=q.front();
		q.pop();
		cout<<index<<" ";
		for(int i=0;i<gra[index].size();i++){
			int index_1=gra[index][i];
			if(!vis[index_1]){
				q.push(index_1);
				vis[index_1]=true;
			}
		}
	}
}
void dfs(bool vis[],vector<int> gra[],int start){
	if(vis[start]) return;
	vis[start]=true;
	cout<<start<<" ";
	
	for(int i=0;i<gra[start].size();i++){
		int next=gra[start][i];
		if(!vis[next]) dfs(vis,gra,next);
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m,v;
	cin>>n>>m>>v;
	bool visited[n+1];
	fill(visited,visited+n+1,false);
	vector<int> graph[n+1];
	for(int i=0;i<m;i++){
		int index_1,index_2;
		cin>>index_1>>index_2;
		graph[index_1].push_back(index_2);
		graph[index_2].push_back(index_1);
	}
	for(int i=1;i<=n;i++){
		sort(graph[i].begin(),graph[i].end());
	}
	
	dfs(visited,graph,v);
	cout<<"\n";
	fill(visited,visited+n+1,false);
	bfs(visited,graph,v);
	
	
	return 0;
}
