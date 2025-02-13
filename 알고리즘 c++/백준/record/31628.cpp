#include <iostream>

using namespace std;
string arr[11][11];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	bool result_r=false;
	for(int i=0;i<10;i++){
		bool result=true;
		string str; cin>>arr[i][0]; str=arr[i][0];
		for(int j=1;j<10;j++){
			cin>>arr[i][j];
			if(arr[i][j]!=str) result=false;
		}
		if(result) result_r=true;
	}
	for(int i=0;i<10;i++){
		bool result2=true;
		string s=arr[0][i];
		for(int j=1;j<10;j++){
			if(arr[j][i]!=s) result2=false;
		}
		if(result2) result_r=true;
	}
	
	if(result_r) cout<<"1";
	else cout<<"0";
	
	return 0;
}
