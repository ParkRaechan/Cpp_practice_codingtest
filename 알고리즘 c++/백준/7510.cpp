#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,d;	int a,b,c;
	cin>>n; d=n;
	while(n--){
		cin>>a>>b>>c;
		if(a>b&&a>c&&(a*a)==(b*b+c*c)) cout<<"Scenario #"<<d-n<<":\nyes\n\n";
		else if(b>a&&b>c&&(b*b)==(a*a+c*c)) cout<<"Scenario #"<<d-n<<":\nyes\n\n";
		else if(c>b&&c>a&&(c*c)==(b*b+a*a)) cout<<"Scenario #"<<d-n<<":\nyes\n\n";
		else cout<<"Scenario #"<<d-n<<":\nno\n\n";
	}
	
	return 0;
}
