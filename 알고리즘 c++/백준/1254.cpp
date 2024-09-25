#include <iostream>

using namespace std;
string s;
bool Solve(string str){
	int count=str.size()/2;
	for(int i=0;i<count;i++){
		if(str[i]!=str[str.size()-1-i]){
			return false;
		}
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>s; 
	int result=s.size()*2-1;
	for(int i=0;i<s.size();i++){
		string str=s.substr(i,s.size()-i);
		if(Solve(str)){
			result=s.size()+i;
			break;
		}
	}
	cout<<result;
	
	return 0;
}
