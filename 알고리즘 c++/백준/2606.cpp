#include <iostream>
#include <vector>
using namespace std;
vector<int> graph[101];
bool visit[101];
int result=0;
void dfs(int start){
	visit[start]=true;
	for(int i=0;i<graph[start].size();i++){
		int next=graph[start][i];
		if(visit[next]!=true) {
			result++;
			dfs(next);
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,t;
	cin>>n>>t;
	while(t--){
		int index_1,index_2;
		cin>>index_1>>index_2;
		graph[index_1].push_back(index_2);
		graph[index_2].push_back(index_1);
	}
	dfs(1);
	cout<<result;
	
	return 0;
}
