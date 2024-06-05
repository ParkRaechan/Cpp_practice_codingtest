#include <iostream>
#include <queue>
#include <vector>
using namespace std;
vector<int> v[101];
queue<int> qe;
long long result[101][101];
int n,m;
void Solve(int d){
	bool visit[101];
	visit[d]=true;
	qe.push(d);
	
	while(!qe.empty()){
		int index=qe.front();
		qe.pop();
		for(int i=0;i<v[index].size();i++){
			int x=v[index][i];
			if(!visit[x]){
				visit[x]=true;
				qe.push(x);
				result[x][d]=result[index][d]+1;
				result[d][x]=result[d][index]+1;
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	for(int i=0;i<m;i++){
		int index_1,index_2; cin>>index_1>>index_2;
		v[index_1].push_back(index_2); v[index_2].push_back(index_1);
	}
	int mm=2000000000,index;
	for(int i=1;i<=n;i++){
		for(int k=1;k<=n;k++){
			result[i][k]=0;
		}
	}
	for(int i=1;i<=n;i++) Solve(i);
	for(int i=1;i<=n;i++){
		int a=0;
		for(int j=1;j<=n;j++){
			a+=result[i][j];
		}
		if(a<mm){
			mm=a; index=i;
		}
	}
	cout<<index;
	
	return 0;
}
