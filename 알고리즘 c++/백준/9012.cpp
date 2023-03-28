#include <iostream>
#include <stack>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t>0){
		t--;
		string input;
		cin>>input;
		
		stack<char> st;
		string answer="YES";
		for(int i=0;i<input.length();i++){
			if(input[i]=='('){
				st.push(input[i]);
			}else if(!st.empty()&&input[i]==')'&&st.top()=='('){
				st.pop();
			}else{
				answer="NO";
				break;
			}
		}
		if(!st.empty()) answer="NO";
		cout<<answer<<"\n";
	}
	
	return 0;
}
