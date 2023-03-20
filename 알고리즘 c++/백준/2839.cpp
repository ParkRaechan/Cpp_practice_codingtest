#include <iostream>

using namespace std;
int p[5000];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	p[1]=p[2]=p[4]=5000;p[3]=p[5]=1;
	for(int i=6;i<=n;i++){
		p[i]=min(p[i-3],p[i-5])+1;
	}
	if(p[n]>=5000) cout<<"-1";
	else cout<<p[n];
	
	return 0;
}
