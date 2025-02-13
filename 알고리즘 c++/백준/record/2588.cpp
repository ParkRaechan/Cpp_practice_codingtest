#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int i_1,i_2;	cin>>i_1>>i_2;
	int a=i_2/100,a_r=a*i_1;
	i_2%=100;
	int b=i_2/10,b_r=b*i_1;
	i_2%=10;
	int c=i_2,c_r=c*i_1;
	int result=c_r+b_r*10+a_r*100;
	cout<<c_r<<"\n"<<b_r<<"\n"<<a_r<<"\n"<<result;
	
	
	return 0;
}
