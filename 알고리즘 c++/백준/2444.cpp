#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=n-i;j>0;j--){
			cout<<" ";
		}
		for(int j=1;j<=i;j++){
			cout<<"*";
		}
		for(int j=1;j<i;j++){
			cout<<"*";
		}
		cout<<"\n";
	}
	for(int i=1;i<n;i++){
		for(int j=1;j<=i;j++){
			cout<<" ";
		}
		for(int j=n-i;j>0;j--){
			cout<<"*";
		}
		for(int j=n-i-1;j>0;j--){
			cout<<"*";
		}
		cout<<"\n";
	}
	
	return 0;
}
