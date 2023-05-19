#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> graph[100001];
int result[100001];
queue<int> q;
void connect(){
	int prime_n=0;
	while(!q.empty()){
		int p=q.front();
		q.pop();
		while(!graph[p].empty()){
			int p_next=graph[p].back();
			graph[p].pop_back();
			prime_n=result[p];
			if(p_next!=prime_n){
				result[p_next]=p;
				q.push(p_next);
			}
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,d;
	cin>>n;	d=n-1;
	while(d--){
		int a,b;
		cin>>a>>b;
		graph[a].push_back(b);
		graph[b].push_back(a);
	}
	q.push(1);
	connect();
	
	for(int i=2;i<=n;i++){
		cout<<result[i]<<"\n";
	}
	
	return 0;
}
