#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x,y,w,h,a,b;
	cin>>x>>y>>w>>h;
	
	if((w/2-x)<0) a=w-x;
	else a=x;
	
	if((h/2-y)<0) b=h-y;
	else b=y;
	
	cout<<min(a,b);
	
	return 0;
}
