#include <iostream>
#include <cmath>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double t,x_1,y_1,x_2,y_2,r_1,r_2,distance;
	cin>>t;
	for(int i=0;i<t;i++){
		cin>>x_1>>y_1>>r_1>>x_2>>y_2>>r_2;
		distance=sqrt(pow(x_1-x_2,2)+pow((y_1-y_2),2));
		
		if(distance==0&&r_1==r_2) cout<<"-1\n";
		else if((distance+r_1)<r_2) cout<<"0\n";
		else if((distance+r_2)<r_1) cout<<"0\n";
		else if((distance+r_1)==r_2) cout<<"1\n";
		else if((distance+r_2)==r_1) cout<<"1\n";
		else if((distance+r_1)>r_2&&distance<(r_1+r_2)) cout<<"2\n";
		else if((distance+r_2)>r_1&&distance<(r_2+r_1)) cout<<"2\n";
		else if(distance==(r_1+r_2)) cout<<"1\n";
		else if(distance>(r_1+r_2)) cout<<"0\n";
	}
	
	return 0;
}
