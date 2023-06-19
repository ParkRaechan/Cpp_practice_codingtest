#include <iostream>
#include <queue>
#include <algorithm>
using namespace std;
queue<int> q1;
queue<int> q2;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int index;	cin>>index;
		q1.push(index);
	}
	for(int i=0;i<m;i++){
		int index;	cin>>index;
		q2.push(index);
	}
	
	for(int i=0;i<(n+m);i++){
		if(q1.empty()) {
			cout<<q2.front()<<" ";
			q2.pop();
		}
		else if(q2.empty()){
			cout<<q1.front()<<" ";
			q1.pop();
		}
		else if(q1.front()>q2.front()){
			cout<<q2.front()<<" ";
			q2.pop();
		}else if(q1.front()<=q2.front()){
			cout<<q1.front()<<" ";
			q1.pop();
		}
	}
	
	return 0;
}
