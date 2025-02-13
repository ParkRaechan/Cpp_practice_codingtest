#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		string s; cin>>s;
		cout<<s[0]<<s[s.length()-1]<<"\n";
	}
	
	return 0;
}
