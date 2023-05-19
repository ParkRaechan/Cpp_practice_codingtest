#include <iostream>
#include <vector>
using namespace std;
vector<int> graph[100001];
vector<int> resultGraph[100001];
void connect(int a,int b){
	resultGraph[b].push_back(a);
	if(!graph[b].empty()){
		int rr=graph[b].size();
		for(int i=0;i<rr;i++){
			if(graph[b].back()!=a){
				connect(b,graph[b].back());graph[b].pop_back();
			}else{
				graph[b].pop_back();
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
	resultGraph[0].push_back(0);resultGraph[1].push_back(0);
	int m=graph[1].size();
	for(int i=0;i<m;i++){
		connect(1,graph[1].back());
		graph[1].pop_back();
	}
	for(int i=2;i<=n;i++){
		if(!resultGraph[i].empty()){
			cout<<resultGraph[i].back()<<"\n";
			resultGraph[i].pop_back();
		}
	}
	
	return 0;
}
