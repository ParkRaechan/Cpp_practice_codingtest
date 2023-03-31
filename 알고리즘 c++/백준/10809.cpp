#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string sente;
	cin>>sente;
	int alphab[26]={};
	for(int i=0;i<26;i++){
		alphab[i]=-1;
	}
	for(int i=0;i<sente.length();i++){
		if(alphab[sente[i]-'a']==-1){
			alphab[sente[i]-'a']=i;
		}
	}
	for(int i=0;i<26;i++){
		cout<<alphab[i]<<" ";
	}
	
	return 0;
}
