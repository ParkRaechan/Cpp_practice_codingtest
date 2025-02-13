#include <iostream>

using namespace std;
int A,B,V;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>A>>B>>V;
	int index=V-A;
	if(index<=0){
		cout<<"1"; return 0;
	}
	
	if(index%(A-B)!=0){
		index=index/(A-B)+1;
	}else{
		index=index/(A-B);
	}
	cout<<index+1;
	
	return 0;
}
