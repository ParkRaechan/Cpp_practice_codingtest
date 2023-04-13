#include <iostream>
typedef long long ll;
using namespace std;
ll gcd(ll a,ll b ){
	if(a>=b){
		while(1){
			ll re=a%b;
			if(re==0) return b;
			a=b;  b=re;
		}
	}else{
		return gcd(b,a);
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll a,b;
	cin>>a>>b;
	ll index=gcd(a,b);
	while(index--){
		cout<<"1";
	}
	
	return 0;
}
