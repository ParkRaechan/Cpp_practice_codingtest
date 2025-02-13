#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int result;
void dfs(bool vis[],vector<int> gra[],int start,int parent){
	vis[start]=true;
	
	if(parent==0) parent=start;
	for(int i=0;i<gra[start].size();i++){
		int next=gra[start][i];
		if(!vis[next]) dfs(vis,gra,next,parent);
		else{
			if(next==parent){
				result++;
				break;
			}
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,index;
	cin>>t;
	for(int i=0;i<t;i++){
		result=0;
		cin>>index;
		bool visit[index+1];
		vector<int> graph[index+1];
		fill(visit,visit+index+1,false);
		for(int j=1;j<=index;j++){
			int conn;
			cin>>conn;
			graph[j].push_back(conn);
		}
		for(int j=1;j<=index;j++){
			sort(graph[j].begin(),graph[j].end());
		}
		for(int j=1;j<=index;j++){
			if(visit[j]) continue;
			dfs(visit,graph,j,0);
		}
		cout<<result<<"\n";
	}
	
	return 0;
}
