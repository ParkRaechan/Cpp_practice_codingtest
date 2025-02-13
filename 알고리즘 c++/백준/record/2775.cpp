#include <iostream>

using namespace std;
long long ap[15][15];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,k,n;
	cin>>t;
	
	for(int i=1;i<=15;i++){
		ap[0][i]=i;
	}
	for(int i=1;i<=15;i++){
		ap[i][1]=1;
	}
	
	while(t--){
		cin>>k>>n;
		for(int i=1;i<=k;i++){
			for(int j=2;j<=n;j++){
				ap[i][j]=ap[i-1][j]+ap[i][j-1];
			}
		}
		cout<<ap[k][n]<<"\n";
	}
	
	
	return 0;
}
