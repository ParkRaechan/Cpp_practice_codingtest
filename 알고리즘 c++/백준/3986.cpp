#include <iostream>
#include <stack>
using namespace std;
stack<char> st;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int result=0;
	for(int i=0;i<n;i++){
		string s; cin>>s;
		for(int j=0;j<s.length();j++){
			if(st.empty()) st.push(s[j]);
			else{
				if(st.top()==s[j]){
					st.pop();
				}else st.push(s[j]);
			}
		}
		if(st.empty()) result++;
		else{
			while(!st.empty()) st.pop();
		}
	}
	cout<<result;
	
	return 0;
}
