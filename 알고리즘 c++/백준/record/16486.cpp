#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double d1,d2;
	cin>>d1>>d2;
	double result_index=2*d2*3.141592;
	printf("%.6f",result_index+2*d1);
	
	return 0;
}
