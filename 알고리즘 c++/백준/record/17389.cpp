#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int bonus=0,result=0;
	for(int i=1;i<=n;i++){
		char index; cin>>index;
		if(index=='O'){
			result+=i;
			result+=bonus;
			bonus++;
		}else{
			bonus=0;
		}
	}
	cout<<result;
	
	
	return 0;
}
