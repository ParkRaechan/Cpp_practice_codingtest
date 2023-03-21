#include <iostream>

using namespace std;
int d[1000001];
int dp(int x){
	if(x==0) return 1;
	if(x==1) return 2;
	if(x==2) return 7;
	if(d[x]!=0) return d[x];
	int result=3*dp(x-2)+2*dp(x-1);
	for(int i=3;i<=x;i++){
		result+=2*dp(x-i);
	}
	return d[x]=result%1000000007;
}

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	cout<<dp(n);
	
	return 0;
}
