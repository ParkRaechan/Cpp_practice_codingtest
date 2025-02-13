#include <iostream>
#include <stack>
using namespace std;
stack<int> stk;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s;	bool result_e;
	while(getline(cin,s)){
		while(!stk.empty()) stk.pop();
		if(s[0]=='.'&&s.length()==1) break;
		result_e=true;
		for(int i=0;i<s.length();i++){
			if(s[i]=='('){
				stk.push(1);
			}else if(s[i]=='['){
				stk.push(2);
			}else if(s[i]==')'){
				if(stk.empty()){
					result_e=false;
					break;
				}
				if(stk.top()!=1){
					result_e=false;
					break;
				}
				stk.pop();
			}else if(s[i]==']'){
				if(stk.empty()){
					result_e=false;
					break;
				}
				if(stk.top()!=2){
					result_e=false;
					break;
				}
				stk.pop();
			}else if(s[i]=='.') break;
		}
		if(result_e==true&&stk.empty()) cout<<"yes\n";
		else cout<<"no\n";
	}
	
	return 0;
}
