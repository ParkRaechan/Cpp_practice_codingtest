#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	while(1){
		int a,b,c,result;
		cin>>a>>b>>c;
		if(a==0&&b==0&&c==0) break;
		else if(a>b&&a>c) result=a*a-b*b-c*c;
		else if(b>a&&b>c) result=b*b-a*a-c*c;
		else if(c>a&&c>b) result=c*c-a*a-b*b;
		
		if(result==0) cout<<"right\n";
		else cout<<"wrong\n";
	}
	
	return 0;
}
