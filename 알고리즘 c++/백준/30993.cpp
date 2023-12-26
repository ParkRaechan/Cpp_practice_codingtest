#include <iostream>

using namespace std;
long long calcu(int i){
	long long re=i;
	while(i>1){
		re*=i-1;
		i--;
	}
	
	return re;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n,a,b,c;
	cin>>n>>a>>b>>c;
	cout<<calcu(n)/(calcu(a)*calcu(b)*calcu(c));
	
	return 0;
}
