#include <iostream>
#include <queue>
using namespace std;
priority_queue<int,vector<int>,greater<int>> q1;
priority_queue<int,vector<int>,greater<int>> q2;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	while(n--){
		int index; cin>>index;
		if(index==0){
			int a=2147483647,b=2147483647;
			if(!q1.empty()) a=q1.top();
			if(!q2.empty()) b=q2.top();
			if(q1.empty()&&q2.empty()){
				cout<<"0\n";
				continue;
			}
			if(a==b){
				cout<<-1*b<<"\n";
				q2.pop();
			}else if(a<b){
				cout<<a<<"\n";
				q1.pop();
			}else{
				cout<<-1*b<<"\n";
				q2.pop();
			}
		}else{
			if(index>0){
				q1.push(index);
			}else{
				q2.push(-1*index);
			}
		}
	}
	
	return 0;
}
