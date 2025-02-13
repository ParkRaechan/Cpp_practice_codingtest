#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int result=n/4;
	if((n%4)!=0) result++;
	while(result--){
		cout<<"long ";
	}
	cout<<"int";
	
	return 0;
}
