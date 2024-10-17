#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	
	for(int i=1;i<n;i++){
		int sum=i;
		int d=i;
		while(d!=0){
			sum+=d%10;
			d/=10;
		}
		if(sum==n){
			cout<<i;
			return 0;
		}
	}
	cout<<"0";
	
	return 0;
}
