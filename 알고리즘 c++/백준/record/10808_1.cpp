#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string sente;
	cin>>sente;
	int alphab[26] = { 0, };
	for (int i = 0; i < sente.length(); i++){
		alphab[sente[i]-'a']++;
	}
	for (int i = 0; i < 26; i++){
		cout << alphab[i] << " ";
	}

	return 0;
}
