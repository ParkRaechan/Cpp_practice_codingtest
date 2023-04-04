#include <iostream>
#include <stack>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	stack<char> left_c; stack<char> right_c;
	string s; int comd_count;
	cin>>s;cin>>comd_count;
	for(int j=0;j<s.length();j++){
		left_c.push(s[j]);
	}
	for(int i=0;i<comd_count;i++){
		char comd; cin>>comd;
		if(comd=='L'){
			if(!left_c.empty()){
				right_c.push(left_c.top());
				left_c.pop();
			}
		}else if(comd=='D'){
			if(!right_c.empty()){
				left_c.push(right_c.top());
				right_c.pop();
			}
		}else if(comd=='B'){
			if(!left_c.empty()){
				left_c.pop();
			}
		}else if(comd=='P'){
			char index;
			cin>>index;
			left_c.push(index);
		}
	}
	while(!left_c.empty()){
		right_c.push(left_c.top());
		left_c.pop();
	}
	while(!right_c.empty()){
		cout<<right_c.top();
		right_c.pop();
	}
	
	return 0;
}
