#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string senten;
	getline(cin,senten);
	for(int i=0;i<senten.length();i++){
		char wa=senten[i];
		if(wa>='a'&&wa<='z'){
			if(wa-'a'<13) wa+=13;
			else wa-=13;
		}else if(wa>='A'&&wa<='Z'){
			if(wa-'A'<13) wa+=13;
			else wa-=13;
		}
		senten[i]=wa;
	}
	cout<<senten;
}
