#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,h; cin>>n>>h;
	int result=0;
	for(int i=0;i<n;i++){
		int index; cin>>index;
		if(index<=h) result++;
	}
	cout<<result;
	
	return 0;
}
