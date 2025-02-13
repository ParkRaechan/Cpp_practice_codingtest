#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x; cin>>x;
	int result=x%3;
	if(result==1){
		cout<<"U";
	}else if(result==2){
		cout<<"O";
	}else if(result==0){
		cout<<"S";
	}
	
	return 0;
}
