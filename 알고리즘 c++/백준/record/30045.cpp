#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,result=0; cin>>N;
	for(int i=0;i<N;i++){
		string s; cin>>s;
		for(int j=0;j<s.length();j++){
				if(s[j]=='0'&&j<s.length()-1){
					if(s[j+1]=='1'){
						result++;
						break;
					}
				}else if(s[j]=='O'&&j<s.length()-1){
					if(s[j+1]=='I'){
						result++;
						break;
					}
				}
		}
	}
	cout<<result;
	
	return 0;
}
