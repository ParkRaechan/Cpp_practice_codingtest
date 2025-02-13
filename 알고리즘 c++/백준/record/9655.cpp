#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N; 
	if(N%2==0){
		cout<<"CY";
	}else{
		cout<<"SK";
	}
	
	return 0;
}
