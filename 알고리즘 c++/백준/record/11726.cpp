#include <iostream>

using namespace std;

int D[1001];
int dp(int x){
	if(x==1) return 1;
	if(x==2) return 2;
	if(D[x]!=0) return D[x];
	
	return D[x]=(dp(x-1)+dp(x-2))%10007;
}

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	
	cout<<dp(n);
	
	return 0;
}
