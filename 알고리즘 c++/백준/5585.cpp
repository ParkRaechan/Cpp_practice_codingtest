#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int entry,number=0;
	cin>>entry;
	
	entry=1000-entry;
	number+=(entry/500);
	entry%=500;
	number+=(entry/100);
	entry%=100;
	number+=(entry/50);
	entry%=50;
	number+=(entry/10);
	entry%=10;
	number+=(entry/5);
	entry%=5;
	number+=(entry/1);
	cout<<number;
	
	return 0;
}
