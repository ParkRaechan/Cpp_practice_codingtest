#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a_r,b_r,c_r;	cin>>a_r>>b_r>>c_r;
	int a=1,b=1,c=1,result=1;
	while(1){
		if(a==a_r&&b==b_r&&c==c_r){
			cout<<result;
			break;
		}else{
			a++;b++;c++;result++;
		}
		if(a==16) a=1;
		if(b==29) b=1;
		if(c==20) c=1;
	}
	
	return 0;
}
