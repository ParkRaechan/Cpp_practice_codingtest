#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a,b; cin>>a>>b;
	string a_1="   ",b_1="   ";
	for(int i=0;i<3;i++){
		a_1[i]=a[2-i];
		b_1[i]=b[2-i];
	}
	int a_r=stoi(a_1);
	int b_r=stoi(b_1);
	if(a_r>b_r) cout<<a_r;
	else cout<<b_r;
	
	return 0;
}
