#include <iostream>
#include <cstring>
#define MAX 100001
using namespace std;
int t,n,cnt,graph[MAX];
bool visit[MAX],done[MAX];
void dfs(int index){
	visit[index]=true;
	int next=graph[index];
	if(!visit[next]) dfs(next);
	else if(!done[next]){
		for(int i=next;i!=index;i=graph[i]){
			cnt++;
		}
		cnt++;
	}
	done[index]=true;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t;
	while(t--){
		cin>>n;
		for(int i=1;i<=n;i++){
			cin>>graph[i];
		}
		for(int i=1;i<=n;i++){
			if(!visit[i]) dfs(i);
		}
		cout<<n-cnt<<"\n";
		cnt=0;
		memset(visit,false,sizeof(visit));
		memset(done,false,sizeof(done));
	}
	
	return 0;
}
