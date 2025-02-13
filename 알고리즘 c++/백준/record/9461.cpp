#include <iostream>

using namespace std;

long long d[102];

long long dp(int x){
	if(d[x]!=0){
		return d[x];
	}
	return d[x]=dp(x-1)+dp(x-5);
}

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	d[1]=1,d[2]=1,d[3]=1;
	d[4]=2,d[5]=2;
	
	int n;
	cin>>n;
	
	for(int i=0;i<n;i++){
		int m;
		cin>>m;
		cout<<dp(m)<<"\n";
	}
	
	return 0;
}
