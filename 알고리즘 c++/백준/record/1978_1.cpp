#include <iostream>
#include <cmath>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b,bole,number;
	cin>>a>>b;
	for(number=a;number<=b;number++){
		bole=0;
		if(number==2||number==3){
			cout<<number<<"\n";
		}
		else{
			for(int j=2;j<=sqrt(number);j++){
				if(number%j==0) {
					bole=1; break;
				}
				if(j==floor(sqrt(number))&&bole==0){
					cout<<number<<"\n";
				}
			}
		}
	}
	
	return 0;
}
