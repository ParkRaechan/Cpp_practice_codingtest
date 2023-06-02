#include <iostream>
#include <vector>
#include <cstring>
using namespace std;
vector<pair<int,int>> node[100002];
bool visited[100002]={false,};
int result=0;
int endPoint=0;
void dfs(int number,int distance){
	if(visited[number]) return;
	visited[number]=true;
	if(result<distance){
		result=distance;
		endPoint=number;
	}
	for(int i=0;i<node[number].size();i++){
		dfs(node[number][i].first,distance+node[number][i].second);
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		int a,b,c;
		cin>>a;
		while(1){
			cin>>b;
			if(b==-1) break;
			cin>>c;
			node[a].push_back({b,c});
			node[b].push_back({a,c});
		}
	}
	dfs(1,0);
	result=0;
	memset(visited,false,sizeof(visited));
	dfs(endPoint,0);
	cout<<result;
	
	return 0;
}
