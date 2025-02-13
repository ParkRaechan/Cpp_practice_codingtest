#include <iostream>
#include <stack>
using namespace std;
stack<char> st;
stack<long long> st2;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; cin>>s;
	long long index=1;
	for(int i=0;i<s.length();i++){
		if(s[i]==']'){
			if(!st.empty()){
				if(st.top()=='['){
					index*=3;
					st.pop();
					if(!st.empty()){
						if(st.top()=='a'){
							index+=st2.top();
							st2.pop();
							st.pop();
						}
					}
				}else{
					cout<<"0";
					return 0;
				}
			}else{
				cout<<"0";
				return 0;
			}
		}else if(s[i]==')'){
			if(!st.empty()){
				if(st.top()=='('){
					index*=2;
					st.pop();
					if(!st.empty()){
						if(st.top()=='a'){
							index+=st2.top();
							st2.pop();
							st.pop();
						}
					}
				}else{
					cout<<"0";
					return 0;
				}
			}else{
				cout<<"0";
				return 0;
			}
		}else{
			if(index!=1){
				st2.push(index);
				index=1;
				st.push('a');
			}
			st.push(s[i]);
		}
	}
	if(!st.empty()){
		cout<<"0"; return 0;
	}
	cout<<index;
	
	return 0;
}
