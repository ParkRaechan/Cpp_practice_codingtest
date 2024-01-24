#include <iostream>

using namespace std;
int gcd(int a,int b){
	if(b==0) return a;
	return gcd(b,a%b);
}
int lcm(int a,int b){
	return (a*b)/gcd(a,b);
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		int m,n,x,y;
		cin>>m>>n>>x>>y;
		
		int result=-1;
		int ggd=lcm(m,n);
		
		for(int i=x;i<=ggd;i+=m){
			int ry=i%n;
			if(ry==0) ry=n;
			if(ry==y){
				result=i;
				break;
			}
		}
		cout<<result<<"\n";
	}
	
	return 0;
}
