#include <iostream>

using namespace std;

int main(int args, const char *argv[]){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	
	cin>>N;
	
	for(int i=1;i<=9;i++){
		cout<<N<<" * "<<i<<" = "<<N*i<<"\n";
	}
	
	return 0;
}
