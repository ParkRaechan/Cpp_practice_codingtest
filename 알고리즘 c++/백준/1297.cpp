#include <iostream>
#include <cmath>
using namespace std;
long long d,h,w;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>d>>w>>h;
	cout<<(long long)(d/sqrt(w*w+h*h)*w)<<" "<<(long long)(d/sqrt(w*w+h*h)*h);
	
	return 0;
}
