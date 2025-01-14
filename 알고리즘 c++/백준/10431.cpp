#include <iostream>
#include <stack>
using namespace std;
stack<int> st;
int sum=0;
void Solve(int index){
	if(st.empty()){
		st.push(index);
		return;
	}
	
	int index1=st.top();
	if(index1>index){
		sum++;
		st.pop();
		Solve(index);
		st.push(index1);
	}else{
		st.push(index);
	}
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		int cases; cin>>cases;
		
		sum=0;
		for(int i=0;i<20;i++){
			int index; cin>>index;
			Solve(index);
		}
		cout<<cases<<" "<<sum<<"\n";
		while(!st.empty()){
			st.pop();
		}
	}
	
	return 0;
}
