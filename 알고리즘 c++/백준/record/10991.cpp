#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;
	
	for(int i=0;i<N;i++){
		for(int t=1;t<N-i;t++){
			cout<<" ";
		}
		for(int t=1;t<=2*i+1;t++){
			if(t%2==0){
				cout<<" ";
			}else{
				cout<<"*";
			}
		}
		cout<<"\n";
	}
	
	return 0;
}
