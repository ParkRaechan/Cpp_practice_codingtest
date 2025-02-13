#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,n,m;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>n>>m;
		int a=1,b=m;long long sum=1;
		for(int j=0;j<n;j++){
			sum=sum*b--;
			sum=sum/a++;
		}
		cout<<sum<<"\n";
	}
	
	return 0;
}
