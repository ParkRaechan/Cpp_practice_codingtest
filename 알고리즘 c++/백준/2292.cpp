#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	
	int i=1,j=6,k=1;
	if(n==1){
		cout<<"1";
		return 0;
	}
	while(k<n){
		i++; k+=j; j+=6;
		if(k>=n){
			cout<<i;
			return 0;
		}
	}
	
	return 0;
}
