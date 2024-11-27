#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		int n,m; cin>>n>>m;
		int index=m-n;
		if(index==0){
			cout<<"1\n";
		}else{
			if(index<n) n=index;
			long long sum=1;
			for(int i=1;i<=n;i++){
				sum*=m--;
				sum/=i;
			}
			cout<<sum<<"\n";
		}
	}
	
	return 0;
}
