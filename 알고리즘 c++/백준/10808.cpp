#include <iostream>

using namespace std;
int list[26];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string alphab;
	cin>>alphab;
	for(int i=0;i<alphab.size();i++){
		list[alphab[i]-97]++;
	}
	for(int i=0;i<26;i++){
		cout<<list[i]<<" ";
	}
	return 0;
}
