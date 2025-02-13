#include <iostream>

using namespace std;
char arr[6][16];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=0;i<5;i++){
		string s; cin>>s;
		for(int j=0;j<s.length();j++){
			arr[i][j]=s[j];
		}
		for(int j=s.length();j<15;j++){
			arr[i][j]=' ';
		}
	}
	for(int j=0;j<15;j++){
		for(int i=0;i<5;i++){
			if(arr[i][j]==' ') continue;
			cout<<arr[i][j];
		}
	}
	
	return 0;
}
