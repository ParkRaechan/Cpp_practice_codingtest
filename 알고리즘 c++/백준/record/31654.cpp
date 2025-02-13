#include <iostream>

using namespace std;
int A,B,C;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>A>>B>>C;
	if(A+B==C) cout<<"correct!";
	else cout<<"wrong!";
	
	return 0;
}
