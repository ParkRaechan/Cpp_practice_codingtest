#include <iostream>
#include <queue>
using namespace std;
int n,k;
bool visit[100001];
queue<pair<int,int>> q;
void solve(){
	q.push({n,0});
	while(!q.empty()){
		int a=q.front().first;
		int b=q.front().second;
		q.pop();
		if(a==k){
			cout<<b;
			break;
		}
		if(a+1>=0&&a+1<100001){
			if(!visit[a+1]){
				visit[a+1]=true;
				q.push({a+1,b+1});
			}
		}
		if(a-1>=0&&a-1<100001){
			if(!visit[a-1]){
				visit[a-1]=true;
				q.push({a-1,b+1});
			}
		}
		if(a*2>=0&&a*2<100001){
			if(!visit[a*2]){
				visit[a*2]=true;
				q.push({a*2,b+1});
			}
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>k;
	visit[n]=true;
	solve();
	
	return 0;
}
