#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,n,f=0;
	cin>>t>>n;
	for(int i=0;i<n;i++){
		int index;
		cin>>index;
		f+=index;
	}
	if(f>=t) cout<<"Padaeng_i Happy";
	else cout<<"Padaeng_i Cry";
	
	return 0;
}
