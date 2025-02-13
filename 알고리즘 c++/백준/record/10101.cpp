#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int angle_1,angle_2,angle_3;
	cin>>angle_1>>angle_2>>angle_3;
	if(angle_1==60&&angle_2==60&&angle_3==60) cout<<"Equilateral";
	else if((angle_1+angle_2+angle_3)==180){
		if(angle_1==angle_2||angle_1==angle_3||angle_2==angle_3) cout<<"Isosceles";
		else cout<<"Scalene";
	}
	else cout<<"Error";
	
	return 0;
}
