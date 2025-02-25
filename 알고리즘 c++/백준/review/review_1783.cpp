#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m; cin>>n>>m;
	if(n==1||m==1){
		cout<<"1";
	}else if(n==2){
		if(m>2&&m<5) cout<<"2";
		else if(m>=5&&m<7) cout<<"3";
		else if(m>=7) cout<<"4";
		else cout<<"1";
	}else if(n>=3){
		if(m<=4) cout<<m;
		else if(m>4&&m<7) cout<<"4";
		else if(m>=7) cout<<m-2;
	}
	
	return 0;
}
