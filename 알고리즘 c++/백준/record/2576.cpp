#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m=999,sum=0;
	for(int i=0;i<7;i++){
		int index;cin>>index;
		if(index%2!=0){
			sum+=index;
			if(index<m) m=index;
		}
	}
	if(sum==0){
		cout<<"-1"; return 0;
	}
	cout<<sum<<"\n"<<m;
	
	return 0;
}
