#include <iostream>
#include <cmath>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double n;
	cin>>n;
	printf("%.9lf",sqrt(3)*n*n/4);
	
	return 0;
}
