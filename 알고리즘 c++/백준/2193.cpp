#include <iostream>

using namespace std;

long long d[91];
long long dp(int x){
	if(x==1) return 1;
	if(x==2) return 1;
	if(d[x]!=0) return d[x];
	return d[x]=dp(x-2)+dp(x-1);
}

int main(int argc, const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	cout<<dp(n);
	
	return 0;
}
