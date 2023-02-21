#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int d[11];
	d[1]=1;d[2]=2;d[3]=4;
	for(int i=4;i<12;i++){
		d[i]=d[i-3]+d[i-2]+d[i-1];
	}
	
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		cout<<d[m]<<"\n";
	}
	
	return 0;
}
