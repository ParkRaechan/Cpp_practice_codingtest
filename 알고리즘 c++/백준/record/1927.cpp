#include <iostream>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>> p_q;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;	cin>>n;
	for(int i=0;i<n;i++){
		int m; cin>>m;
		if(m==0){
			if(!p_q.empty()){
				cout<<p_q.top()<<"\n";
				p_q.pop();
			}else cout<<"0\n";
		}else{
			p_q.push(m);
		}
	}
	
	return 0;
}
