#include <iostream>

using namespace std;
int Absolute(int d){
	if(d<0) return -d;
	return d;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int b1,b2,d1,d2,j1,j2,result_b,result_d;
	cin>>b1>>b2;
	cin>>d1>>d2;
	cin>>j1>>j2;
	result_d=Absolute(j1-d1)+Absolute(j2-d2);
	result_b=max(Absolute(j1-b1),Absolute(j2-b2));
	if(result_b==result_d) cout<<"tie";
	else if(result_b<result_d) cout<<"bessie";
	else cout<<"daisy";
	
	return 0;
}
