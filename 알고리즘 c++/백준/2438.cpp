#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;
	
	for(int i=0;i<N;i++){
		for(int t=0;t<=i;t++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	return 0;
}
