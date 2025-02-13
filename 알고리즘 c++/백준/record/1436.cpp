#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int result=0;
	for(int i=666;i<=666666666;i++){
		string s=to_string(i);
		for(int j=0;j<=s.length()-3;j++){
			if(s[j]=='6'&&s[j+1]==s[j]&&s[j+2]==s[j+1]){
				result++;
				if(result==n){
					cout<<i;
					return 0;
				}
				break;
			}
		}
	}
	
	return 0;
}
