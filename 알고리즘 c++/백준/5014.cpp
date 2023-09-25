#include <iostream>
#include <queue>
using namespace std;
bool visited[1000001];
queue<pair<int,int>> q;
int f,s,g,u,d,result_cnt=0;
void bfs(int s){
	q.push({s,0});
	while(!q.empty()){
		int curt_s=q.front().first;
		int cnt=q.front().second;
		q.pop();
		if(curt_s<=0||curt_s>f) continue;
		if(visited[curt_s]==true) continue;
		if(curt_s==g){
			result_cnt=cnt;
			break;
		}
		
		visited[curt_s]=true;
		cnt++;
		q.push({curt_s+u,cnt});
		q.push({curt_s-d,cnt});
	}
	
	if(result_cnt==0){
		if(s==g) cout<<"0";
		else cout<<"use the stairs";
	}else cout<<result_cnt;
	
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>f>>s>>g>>u>>d;
	bfs(s);
	
	return 0;
}
