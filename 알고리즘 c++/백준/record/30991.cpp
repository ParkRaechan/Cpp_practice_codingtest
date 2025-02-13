#include <iostream>

using namespace std;
long long calcu(int n){
	if(n==1) return 1;
	long long b=1,c=1;
	for(int i=2;i<=n;i++){
		long long bb=b,cc=c;
		b=bb+cc;
		c=-4*bb+cc;
	}
	return c;
}


int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	cout<<calcu(n);
	
	return 0;
}
