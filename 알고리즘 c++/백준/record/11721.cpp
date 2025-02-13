#include <iostream>
#include <string>
using namespace std;

int main(int args,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string str="";
	cin>>str;
	
	for(int i=1;i<=str.size();i++){
		cout<<str[i-1];
		if(i%10==0) cout<<endl;
	}
	
	return 0;
}
