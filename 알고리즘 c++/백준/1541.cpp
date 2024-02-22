#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;	cin>>n;
	bool mtype=false;
	while(1){
		
		char c;	cin.get(c);
		int d;
		
		if(c=='\n') break;
		else if(c=='+'){
			cin>>d;
			if(mtype==true){
				n-=d;
			}else{
				n+=d;
			}
		}else{
			cin>>d;
			n-=d;
			mtype=true;
		}
	}
	cout<<n;
	
	return 0;
}
