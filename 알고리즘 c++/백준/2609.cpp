#include <iostream>

using namespace std;
int gcd(int a,int b){
	if(a>=b){
		while(1){
			int re=a%b;
			if(re==0) return b;
			a=b; b=re;
		}
	}else{
		return gcd(b,a);
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b;
	cin>>a>>b;
	cout<<gcd(a,b)<<"\n"<<a*b/gcd(a,b);
	
	return 0;
}
