#include <iostream>
#include <algorithm>
using namespace std;
int p[1001];
int pp[1001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N;
	cin>>N;
	
	for(int i=1;i<=N;i++){
		cin>>p[i];
	}
	for(int i=1;i<=N;i++){
		for(int j=1;j<=i;j++){
			pp[i]=max(pp[i],pp[i-j]+p[j]);
		}
	}
	cout<<pp[N];
	
	return 0;
}
