#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int h,w,n,m; cin>>h>>w>>n>>m;
	int x=n+1,y=m+1;
	int xx=h/x,xx_1=h%x; if(xx_1!=0) xx++;
	int yy=w/y,yy_1=w%y; if(yy_1!=0) yy++;
	cout<<xx*yy;
	
	return 0;
}
