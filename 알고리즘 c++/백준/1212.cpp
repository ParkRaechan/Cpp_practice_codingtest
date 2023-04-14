#include <iostream>
#include <string>
using namespace std;
string array_1[8]={"000","001","010","011","100","101","110","111"};
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string input,result;
	cin>>input;
	if(input=="0"){
		cout<<"0"; return 0;
	}
	for(int i=0;i<input.length();i++){
		int index=input[i]-'0';
		result+=array_1[index];
	}
	while(1){
		if(result[0]=='0') {
			result=result.substr(1,result.length());
		}
		else break;
	}
	cout<<result;
	
	return 0;
}
