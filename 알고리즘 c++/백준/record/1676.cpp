#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; long long sum=0;
	cin>>n;
	for(int i=5;i<=n;i*=5){
		sum+=n/i;
	}
	cout<<sum;
	
	return 0;
}
