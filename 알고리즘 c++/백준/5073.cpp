#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b,c;
	while(1){
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0) break;
		else if(a==b&&b==c) cout<<"Equilateral\n";
		else if(a>=b&&a>=c&&a>=(b+c)){
			cout<<"Invalid\n";
		}
		else if(b>=a&&b>=c&&b>=(a+c)){
			cout<<"Invalid\n";
		}
		else if(c>=a&&c>=b&&c>=(a+b)){
			cout<<"Invalid\n";
		}
		else if(a==b||b==c||c==a) cout<<"Isosceles\n";
		else cout<<"Scalene\n";
	}
	
	return 0;
}
