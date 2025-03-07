#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int index;
	if(n<11) index=1;
	else if(n<111) index=2;
	else if(n<1111) index=3;
	else if(n<11111) index=4;
	else if(n<111111) index=5;
	else if(n<1111111) index=6;
	else if(n<11111111) index=7;
	else if(n<111111111) index=8;
	else if(n<1111111111) index=9;
	cout<<index;
	
	return 0;
}
