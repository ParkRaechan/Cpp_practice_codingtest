#include <iostream>

using namespace std;

int main(int args,const char *argv[]){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b=0;
	char c;
	
	cin>>a;
	
	for(int i=0;i<a;i++){
		cin>>c;
		b+=c-48;
	}
	cout<<b<<endl;
	
	return 0;
}
