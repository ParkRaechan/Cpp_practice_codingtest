#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int M=0;
	int x=0,y=0;
	for(int i=1;i<=9;i++){
		for(int j=1;j<=9;j++){
			int index; cin>>index;
			if(index>=M){
				M=index;
				x=i; y=j;
			}
		}
	}
	cout<<M<<"\n"<<x<<" "<<y;
	
	return 0;
}
