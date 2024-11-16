#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; cin>>s;
	bool result=true;
	for(int i=0;i<s.length();i++){
		if(s[i]!=s[s.length()-1-i]){
			result=false;
			break;
		}
	}
	
	if(result) cout<<"1";
	else cout<<"0";
	
	return 0;
}
