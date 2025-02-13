#include <iostream>

using namespace std;

int d[11];
int dp(int x){
	if(x==1) return 1;
	if(x==2) return 2;
	if(x==3) return 4;
	if(d[x]!=0) return d[x];
	return d[x]=dp(x-3)+dp(x-2)+dp(x-1);
}

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		cout<<dp(m)<<"\n";
	}
	
	return 0;
}
