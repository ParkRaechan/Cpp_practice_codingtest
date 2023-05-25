#include <iostream>
#include <cmath>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int index=1;
	while(1){
		long long r,w,l;
		cin>>r; if(r==0) break;
		cin>>w>>l;
		if((w*w+l*l)<=(4*r*r)) cout<<"Pizza "<<index<<" fits on the table.\n";
		else cout<<"Pizza "<<index<<" does not fit on the table.\n";
		index++;
	}
	
	return 0;
}
