#include <iostream>

using namespace std;

int main(int args,const char *argv[]){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,a,b;
	
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a>>b;
		cout<<"Case #"<<i<<": "<<a+b<<"\n";
	}
	
	return 0;
}
