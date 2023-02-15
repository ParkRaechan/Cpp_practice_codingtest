#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;
	
	for(int i=0;i<N;i++){
		for(int t=N-i-1;t>0;t--){
			cout<<" ";
		}
		for(int t=0;t<=i;t++){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	for(int i=0;i<N-1;i++){
		for(int t=0;t<=i;t++){
			cout<<" ";
		}
		for(int t=N-1-i;t>0;t--){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	return 0;
}
