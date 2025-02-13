#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int x_1,x_2,a,b,c,d,e;
	long long r_1,r_2;
	cin>>x_1>>x_2>>a>>b>>c>>d>>e;
	b=b-d;	c=c-e;
	a/=3;	b/=2;
	r_1=x_1*x_1*x_1*a+b*x_1*x_1+x_1*c;
	r_2=x_2*x_2*x_2*a+b*x_2*x_2+x_2*c;
	cout<<r_2-r_1;
	
	return 0;
}
