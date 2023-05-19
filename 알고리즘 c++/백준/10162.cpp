#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	
	int a=t/300;
	t%=300;
	int b=t/60;
	t%=60;
	int c=t/10;
	t%=10;
	if(t!=0){
		cout<<"-1";
		return 0;
	}
	cout<<a<<" "<<b<<" "<<c;
	
	return 0;
}
