#include <iostream>

using namespace std;
int d[41];
int dp1(int x){
	if(d[x]!=0) return d[x];
	return d[x]=dp1(x-1)+dp1(x-2);
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	d[1]=1;d[2]=1;
	cout<<dp1(n)<<" "<<n-2;
	
	return 0;
}
