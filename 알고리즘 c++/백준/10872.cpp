#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,sum=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		sum*=i;
	}
	cout<<sum;
	
	return 0;
}
