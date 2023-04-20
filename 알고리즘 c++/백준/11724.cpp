#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void dfs(bool vis[],vector<int> gra[],int start){
	if(vis[start]) return;
	vis[start]=true;
	for(int i=0;i<gra[start].size();i++){
		int next=gra[start][i];
		if(!vis[next]) dfs(vis,gra,next);
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	bool visit[n+1];
	vector<int> graph[n+1];
	fill(visit,visit+n+1,false);
	for(int i=0;i<m;i++){
		int index_1,index_2;
		cin>>index_1>>index_2;
		graph[index_1].push_back(index_2);
		graph[index_2].push_back(index_1);
	}
	for(int i=1;i<=n;i++){
		sort(graph[i].begin(),graph[i].end());
	}
	int result=0;
	for(int i=1;i<=n;i++){
		if(visit[i]) continue;
		dfs(visit,graph,i);
		result++;
	}
	cout<<result;
	
	return 0;
}
