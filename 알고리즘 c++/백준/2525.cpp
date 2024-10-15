#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b; cin>>a>>b;
	int c; cin>>c;
	b=b+c;
	if(b>=60){
		a=a+b/60;
		b=b%60;
	}
	if(a>=24){
		a=a-24;
	}
	cout<<a<<" "<<b;
	
	return 0;
}
