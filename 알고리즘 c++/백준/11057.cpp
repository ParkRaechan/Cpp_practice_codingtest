#include <iostream>
#define dividen 10007
using namespace std;

long d[10008][11];

int main(int argc,const char argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,sum=0;
	cin>>n;
	for(int j=0;j<10;j++){
		d[1][j]=1;
	}
	for(int i=1;i<=n;i++){
		d[i][0]=1;
	}
	for(int i=2;i<=n;i++){
		for(int j=1;j<10;j++){
			d[i][j]=(d[i-1][j]+d[i][j-1])%dividen;
		}
	}
	for(int i=0;i<10;i++){
		sum+=d[n][i];
	}
	
	cout<<sum%dividen;
	
	return 0;
}
