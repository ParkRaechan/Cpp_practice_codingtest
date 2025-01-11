#include <iostream>
#include <stack>
using namespace std;
stack<int> st;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	for(int i=0;i<n;i++){
		int index; cin>>index;
		if(index==0){
			if(!st.empty()) st.pop();
		}else{
			st.push(index);
		}
	}
	int sum=0;
	while(!st.empty()){
		sum+=st.top();
		st.pop();
	}
	cout<<sum;
	
	return 0;
}
