#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie();
	
	int a,b,c; cin>>a>>b>>c;
	int result=0;
	if(a==b&&b==c){
		result+=10000+a*1000;
	}else if(a==b){
		result+=1000+a*100;
	}else if(b==c){
		result+=1000+b*100;
	}else if(a==c){
		result+=1000+a*100;
	}else{
		result+=max(a,max(b,c))*100;
	}
	cout<<result;
	
	return 0;
}
