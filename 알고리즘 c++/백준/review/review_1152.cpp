#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; getline(cin,s);
	int result=0;
	for(int i=0;i<s.length();i++){
		if(s[i]!=' '){
			if(i==0){
				result++;
			}else if(s[i-1]==' '){
				result++;
			}
		}
	}
	cout<<result;
	
	return 0;
}
