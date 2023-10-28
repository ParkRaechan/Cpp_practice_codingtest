#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int mte=0;
	for(int i=0;i<15;i++){
		for(int j=0;j<15;j++){
			char c;	cin>>c;
			if(c=='w'){
				mte=1;
			}
			if(c=='b'){
				mte=2;
			}
			if(c=='g'){
				mte=3;
			}
		}
	}
	if(mte==1) cout<<"chunbae";
	else if(mte==2) cout<<"nabi";
	else if(mte==3) cout<<"yeongcheol";
	
	return 0;
}
