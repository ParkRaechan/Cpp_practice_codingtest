#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;	cin>>n;
	if(n<10){
		cout<<n;
		return 0;
	}
	int count=0;
	for(int i=1;i<=n;i*=10){
		count+=n-i+1;
	}
	cout<<count;
	
	return 0;
}
