#include <iostream>
#include <string.h>
#include <algorithm>
using namespace std;
int result=0;
int visit[1001];
int graph[1001];
void dfs(int start){
	visit[start]=1;
	
	if(visit[graph[start]]){
		result++;
		return;
	}
	dfs(graph[start]);
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,index;
	cin>>t;
	while(t--){
		result=0;
		cin>>index;
		int conn;
		for(int j=1;j<=index;j++){
			cin>>conn;
			graph[j]=conn;
		}
		for(int j=1;j<=index;j++){
			if(!visit[j]) dfs(j);
		}
		cout<<result<<"\n";
		memset(visit,0,sizeof(visit));
	}
	
	return 0;
}
