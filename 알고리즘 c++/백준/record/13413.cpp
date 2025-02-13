#include <iostream>

using namespace std;
int T,N;
int Solve(string s1,string s2){
	int b_count=0,w_count=0;
	for(int i=0;i<s1.size();i++){
		if(s1[i]!=s2[i]){
			if(s1[i]=='B') b_count++;
			else w_count++;
		}
	}
	
	if(b_count==w_count){
		return b_count;
	}else if(b_count>w_count){
		return b_count;
	}else{
		return w_count;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>T;
	string s1,s2;
	for(int i=0;i<T;i++){
		cin>>N;
		cin>>s1>>s2;
		cout<<Solve(s1,s2)<<"\n";
	}
	
	return 0;
}
