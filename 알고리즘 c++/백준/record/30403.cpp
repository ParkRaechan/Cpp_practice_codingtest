#include <iostream>

using namespace std;
bool s_let[7];
bool c_let[7];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int index;	cin>>index;
	for(int i=0;i<index;i++){
		char c;	cin>>c;
		if(c=='r') s_let[0]=true;
		else if(c=='R') c_let[0]=true;
		else if(c=='o') s_let[1]=true;
		else if(c=='O') c_let[1]=true;
		else if(c=='y') s_let[2]=true;
		else if(c=='Y') c_let[2]=true;
		else if(c=='g') s_let[3]=true;
		else if(c=='G') c_let[3]=true;
		else if(c=='b') s_let[4]=true;
		else if(c=='B') c_let[4]=true;
		else if(c=='i') s_let[5]=true;
		else if(c=='I') c_let[5]=true;
		else if(c=='v') s_let[6]=true;
		else if(c=='V') c_let[6]=true;
	}
	bool mte_s=true,mte_c=true;
	for(int i=0;i<7;i++){
		if(s_let[i]==false){
			mte_s=false;	break;
		}
	}
	for(int i=0;i<7;i++){
		if(c_let[i]==false){
			mte_c=false;	break;
		}
	}
	if(mte_s==true&&mte_c==true) cout<<"YeS";
	else if(mte_s==true) cout<<"yes";
	else if(mte_c==true) cout<<"YES";
	else cout<<"NO!";
	
	return 0;
}
