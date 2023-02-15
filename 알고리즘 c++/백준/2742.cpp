#include <iostream>

using namespace std;

int main(int args, const char *argv[]){
	
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	
	cin>>N;
	
	for(int i=N;i>0;i--){
		cout<<i<<"\n";
	}
	
	return 0;
}
