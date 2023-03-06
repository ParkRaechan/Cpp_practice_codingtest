#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	cin>>T;
	
	int a,b;
	for(int i=0;i<T;i++){
		cin>>a>>b;
		cout<<2-a+b<<"\n";
	}
	
	return 0;
}
