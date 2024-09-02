#include <iostream>
#include <stack>
using namespace std;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	stack<pair<int,int>> s;
	for(int i=0;i<n;i++){
		int index; cin>>index;
		while(!s.empty()){
			if(s.top().second>index){
				cout<<s.top().first<<" ";
				break;
			}else{
				s.pop();
			}
		}
		if(s.empty()){
			cout<<"0 ";
		}
		s.push({i+1,index});
	}
	
	return 0;
}
