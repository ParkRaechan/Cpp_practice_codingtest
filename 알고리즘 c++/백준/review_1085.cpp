#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x,y,w,h; cin>>x>>y>>w>>h;
	int x_to_0=x,y_to_0=y,x_to_w=w-x,y_to_h=h-y;
	int result=min(x_to_0,min(y_to_0,min(x_to_w,y_to_h)));
	cout<<result;
	
	return 0;
}
