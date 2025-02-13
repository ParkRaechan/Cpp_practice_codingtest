#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,index=2;
	cin>>n;
	
	while(1){
		if(n==1) break;
		else if(n%index==0){
			cout<<index<<"\n";
			n/=index;
		}else{
			index++;
		}
	}
	
	return 0;
}
