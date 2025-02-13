#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int A,B;
	cin>>A>>B;
	cout<<A+B<<"\n"<<A-B<<"\n"<<A*B<<"\n"<<A/B<<"\n"<<A%B;
	
	return 0;
}
