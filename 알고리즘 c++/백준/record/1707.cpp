#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
bool result;
void dfs(int vis[],vector<int> gra[],int start,int color){
	vis[start]=color;
	
	for(int i=0;i<gra[start].size();i++){
		int next=gra[start][i];
		if(vis[next]==0) dfs(vis,gra,next,-color);
		else if(vis[next]==color) result=false;
		if(!result) break;
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k;
	cin>>k;
	for(int i=0;i<k;i++){
		result=true;
		int v,e;
		cin>>v>>e;
		int visit[v+1];
		vector<int> graph[v+1];
		fill(visit,visit+v+1,0);
		for(int j=0;j<e;j++){
			int index_1,index_2;
			cin>>index_1>>index_2;
			graph[index_1].push_back(index_2);
			graph[index_2].push_back(index_1);
		}
		for(int j=1;j<=v;j++){
			sort(graph[j].begin(),graph[j].end());
		}
		for(int i=1;i<=v;i++){
			if(visit[i]!=0) continue;
			dfs(visit,graph,i,1);
		}
		if(result) cout<<"YES\n";
		else cout<<"NO\n";
	}
	
	return 0;
}
