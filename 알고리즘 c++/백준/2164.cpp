#include <iostream>
#include <queue>
using namespace std;
queue<int> q;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		q.push(i);
	}
	while(!q.empty()){
		if(q.size()==1){
			cout<<q.front();
			break;
		}
		q.pop();
		if(q.size()==1){
			cout<<q.front();
			break;
		}
		int d=q.front();
		q.pop();
		q.push(d);
	}
	
	return 0;
}
