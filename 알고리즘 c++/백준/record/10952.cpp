#include <iostream>

using namespace std;

int main(int args,const char *argv[]){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b;
	while(cin>>a>>b){
		if(a==0&&a==0){
			break;
		}
		cout<<a+b<<"\n";
	}
	
	return 0;
}
