#include <iostream>

using namespace std;

int main(int args,const char *argv[]){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	int a,b;
	char c;
	
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>a>>c>>b;
		cout<<a+b<<"\n";
	}
	
	return 0;
}
