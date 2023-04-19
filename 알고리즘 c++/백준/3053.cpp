#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	printf("%f\n",n*n*3.14159265358979323846);
	printf("%f\n",n*n*2.0);
	
	return 0;
}
