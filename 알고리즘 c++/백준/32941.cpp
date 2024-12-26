#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,x; cin>>t>>x;
	int n; cin>>n;
	string s="YES";
	for(int i=0;i<n;i++){
		int index; cin>>index;
		bool result=false;
		for(int j=0;j<index;j++){
			int index2; cin>>index2;
			if(index2==x) result=true;
		}
		if(result==false){
			s="NO";
		}
	}
	cout<<s;
	
	return 0;
}
