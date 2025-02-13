#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x_1,x_2,x_3,x_4
	,y_1,y_2,y_3,y_4;
	cin>>x_1>>y_1>>x_2>>y_2>>x_3>>y_3;
	
	if(x_1==x_2) x_4=x_3;
	else if(x_1==x_3) x_4=x_2;
	else if(x_2==x_3) x_4=x_1;
	
	if(y_1==y_2) y_4=y_3;
	else if(y_1==y_3) y_4=y_2;
	else if(y_2==y_3) y_4=y_1;
	
	cout<<x_4<<" "<<y_4;
	
	return 0;
}
