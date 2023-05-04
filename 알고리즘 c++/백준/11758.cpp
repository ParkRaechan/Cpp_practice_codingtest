#include <iostream>

using namespace std;
int CCW(int x1,int y1,int x2,int y2,int x3,int y3){
	long long temp=(x2-x1)*(y3-y1)-(y2-y1)*(x3-x1);
	if(temp>0){
		return 1;
	}else if(temp==0){
		return 0;
	}else if(temp<0){
		return -1;
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long x1,y1,x2,y2,x3,y3;
	cin>>x1>>y1>>x2>>y2>>x3>>y3;
	cout<<CCW(x1,y1,x2,y2,x3,y3);
	
	return 0;
}
