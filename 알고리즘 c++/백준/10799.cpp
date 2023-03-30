#include <iostream>
#include <stack>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string word; int index=0,sum=0;
	stack<char> st;
	cin>>word;
	for(int i=0;i<word.length();i++){
		if(word[i]=='('){
			st.push(word[i]); index++;
		}else if(word[i]==')'&&word[i-1]=='('){
			st.pop(); index--; sum+=index;
		}else{
			st.pop(); index--; sum++;
		}
	}
	cout<<sum;
	
	return 0;
}
