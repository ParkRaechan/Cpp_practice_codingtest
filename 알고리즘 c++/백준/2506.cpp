#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;cin>>n;
	int sum=0,sum_i=0;
	for(int i=0;i<n;i++){
		int index;cin>>index;
		if(index==1){
			sum_i++;sum+=sum_i;
		}else sum_i=0;
	}
	cout<<sum;
	
	return 0;
}
