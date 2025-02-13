#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,result=0;cin>>n;
	for(int i=0;i<5;i++){
		int index;cin>>index;
		if(index==n) result++;
	}
	cout<<result;
	
	return 0;
}
