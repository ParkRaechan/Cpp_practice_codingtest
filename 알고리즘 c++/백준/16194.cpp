#include <iostream>
#include <algorithm>
using namespace std;
int p[1001];
int pp[1001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	int n;	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>p[i];
	}
	for(int i=1;i<=n;i++){
		pp[i]=p[i];
		for(int j=1;j<=i;j++){
			pp[i]=min(pp[i],pp[i-j]+p[j]);
		}
	}
	cout<<pp[n];
	
	return 0;
}
