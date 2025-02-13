#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>
using namespace std;

void bfs(bool vis[],vector<int> gra[],int start){
	if(vis[start]) return;
	queue<int> q;
	q.push(start);
	vis[start]=true;
	while(!q.empty()){
		int index=q.front();
		q.pop();
		for(int i=0;i<gra[index].size();i++){
			int index_1=gra[index][i];
			if(!vis[index_1]){
				q.push(index_1);
				vis[index_1]=true;
			}
		}
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
		bfs(visit,graph,i);
		result++;
	}
	cout<<result;
	
	return 0;
}
