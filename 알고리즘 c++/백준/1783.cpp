#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;	cin>>n>>m;
	int index;
	if(n==1||m==1){
		cout<<"1"; return 0;
	}
	if(m>=7){
		if(n==2) index=4;
		else index=m-7+5;
	}else if(m>=5){
		if(n==2) index=3;
		else index=4;
	}else if(m>=4){
		if(n==2) index=2;
		else index=4;
	}else if(m==3){
		if(n==2) index=2;
		else index=3;
	}else if(m==2){
		if(n==2) index=1;
		else index=2;
	}
	cout<<index;
	
	return 0;
}
