#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string tlp;
	cin>>tlp;
	int index_time=0;
	for(int i=0;i<tlp.size();i++){
		if(tlp[i]=='A'||tlp[i]=='B'||tlp[i]=='C'){
			index_time+=3;
		}
		else if(tlp[i]=='D'||tlp[i]=='E'||tlp[i]=='F'){
			index_time+=4;
		}
		else if(tlp[i]=='G'||tlp[i]=='H'||tlp[i]=='I'){
			index_time+=5;
		}
		else if(tlp[i]=='J'||tlp[i]=='K'||tlp[i]=='L'){
			index_time+=6;
		}
		else if(tlp[i]=='M'||tlp[i]=='N'||tlp[i]=='O'){
			index_time+=7;
		}
		else if(tlp[i]=='P'||tlp[i]=='Q'||tlp[i]=='R'||tlp[i]=='S'){
			index_time+=8;
		}
		else if(tlp[i]=='T'||tlp[i]=='U'||tlp[i]=='V'){
			index_time+=9;
		}
		else if(tlp[i]=='W'||tlp[i]=='X'||tlp[i]=='Y'||tlp[i]=='Z'){
			index_time+=10;
		}
	}
	cout<<index_time;
	
	return 0;
}
