#include <iostream>

using namespace std;

int main(int argc,const char argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;
	
	for(int i=0;i<N-1;i++){
		cout<<" ";
	}
	cout<<"*\n";
	
	for(int i=1;i<N-1;i++){
		for(int t=i;t<=N-2;t++){
			cout<<" ";
		}
		cout<<"*";
		for(int t=0;t<2*i-1;t++){
			cout<<" ";
		}
		cout<<"*\n";
	}
	
	for(int i=0;i<2*N-1;i++){
		cout<<"*";
	}
	
	return 0;
}
