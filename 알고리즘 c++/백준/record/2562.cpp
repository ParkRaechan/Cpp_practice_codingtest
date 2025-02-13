#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int M=0,r=0;
	for(int i=1;i<=9;i++){
		int index; cin>>index;
		if(index>M){
			M=index;
			r=i;
		}
	}
	cout<<M<<"\n"<<r;
	
	return 0;
}
