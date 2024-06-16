#include <iostream>
#include <queue>
using namespace std;
queue<pair<int,pair<int,int>>> q;
int s;
bool vist[10001];
int Solve(){
	q.push({1,{1,1}});
	while(!q.empty()){
		int a=q.front().first;			//time
		int b=q.front().second.first;	//count
		int c=q.front().second.second;	//copy
		q.pop();
		
		
		if(b==s){
			return a;
		}
		
		if(b>s){
			if(!vist[b-1]){
				vist[b]=true;
				q.push({a+1,{b-1,c}});
				continue;
			}
		}
		
		
		if(c!=0){
			if(!vist[b+c]) q.push({a+1,{b+c,c}});
		}
		if(b!=1){
			if(!vist[b-1]) q.push({a+1,{b-1,c}});
		}
		if(a!=1&&!vist[b]) q.push({a+1,{b,b}});
		
		vist[b]=true;
	}
	
	return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>s;
	cout<<Solve();
	
	return 0;
}
