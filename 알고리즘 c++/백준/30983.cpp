#include <iostream>
#include <vector>
#include <queue>
using namespace std;
vector<int> v1[51];
vector<int> v2[51];
int visit[51][1000001];
queue<pair<int,int>> q;
int n,m,t;
int result[51];
void Solve(){
	q.push({1,0});
	while(!q.empty()){
		int a=q.front().first;
		int b=q.front().second;
		q.pop();
		
			
		
		if(b>t) continue;
		else if(b==t){
			result[a]++;
			result[a]%=1000000009;
			continue;
		}
		
		
		if(!v1[a].empty()){
			for(int i=0;i<v1[a].size();i++){
				q.push({v1[a][i],b+1});
			}
		}
		if(!v2[a].empty()){
			for(int i=0;i<v2[a].size();i++){
				q.push({v2[a][i],b+2});
			}
		}
	}
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m>>t;
	for(int i=0;i<m;i++){
		int index;	cin>>index;
		if(index==1){
			int i1,i2;
			cin>>i1>>i2;
			v1[i1].push_back(i2); v1[i2].push_back(i1);
		}else{
			int i1,i2,i3;
			cin>>i1>>i2>>i3;
			v2[i1].push_back(i2);v2[i1].push_back(i3);
			v2[i2].push_back(i1);v2[i2].push_back(i3);
			v2[i3].push_back(i1);v2[i3].push_back(i2);
		}
	}
	Solve();
	for(int i=1;i<=n;i++){
		cout<<result[i]%1000000009<<"\n";
	}
	
	return 0;
}
