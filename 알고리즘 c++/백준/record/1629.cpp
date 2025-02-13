#include <iostream>

using namespace std;
long long div(long long a,long long b,long long c){
	if(b==1) return a%c;
	long long temp=div(a,b/2,c)%c;
	if(b%2==0) return temp*temp%c;
	else return temp*temp%c*a%c;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long a,b,c;	cin>>a>>b>>c;
	cout<<div(a,b,c);
	
	return 0;
}
