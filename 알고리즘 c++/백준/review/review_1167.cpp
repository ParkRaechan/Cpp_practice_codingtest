#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<pair<int,int>> vec[100001];
queue<pair<int,int>> qu;
bool visit[100001];
int M=0,index_M=0;
void Solve(int d){
	qu.push({d,0});
	visit[d]=true;
	while(!qu.empty()){
		int index1=qu.front().first;
		int index2=qu.front().second;
		qu.pop();
		for(int i=0;i<vec[index1].size();i++){
			int index3=vec[index1][i].first;
			int index4=vec[index1][i].second;
			if(!visit[index3]){
				if((index2+index4)>=M){
					M=index2+index4;
					index_M=index3;
				}
				qu.push({index3,index2+index4});
				visit[index3]=true;
			}
		}
	}
	
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int v; cin>>v;
	for(int i=0;i<v;i++){
		int index1; cin>>index1;
		while(1){
			int index2; cin>>index2;
			if(index2==-1) break;
			int index3; cin>>index3;
			vec[index1].push_back({index2,index3});
		}
	}
	Solve(1);
	int result_1=index_M;
	M=0,index_M=0;
	for(int i=1;i<=v;i++){
		visit[i]=false;
	}
	Solve(result_1);
	cout<<M;
	
	return 0;
}
