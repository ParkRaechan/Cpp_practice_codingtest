#include <iostream>
#include <cmath>
using namespace std;
int result=0;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int w,h,x,y,p;
	cin>>w>>h>>x>>y>>p;
	for(int i=0;i<p;i++){
		int index_x,index_y;
		cin>>index_x>>index_y;
		if(index_x>=x&&index_x<=x+w&&index_y>=y&&index_y<=y+h){
			result++;
		}else if(index_x<x){
			double dist=sqrt((x-index_x)*(x-index_x)+((y+h/2)-index_y)*((y+h/2)-index_y));
			if(dist<=h/2) result++;
		}else if(index_x>x+w){
			double dist=sqrt((x+w-index_x)*(x+w-index_x)+((y+h/2)-index_y)*((y+h/2)-index_y));
			if(dist<=h/2) result++;
		}
		else continue;
	}
	cout<<result;
	
	return 0;
}
