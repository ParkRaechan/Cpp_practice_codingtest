#include <iostream>
#include <cmath>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,w,h,index;
	double diagon;
	cin>>n>>w>>h;
	diagon=sqrt(w*w+h*h);
	while(n--){
		cin>>index;
		if(index<=diagon) cout<<"DA\n";
		else cout<<"NE\n";
	}
	
	return 0;
}
