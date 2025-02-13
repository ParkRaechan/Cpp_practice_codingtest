#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string n;	cin>>n;	int index=0;
	for(int i=0;i<n.length();i++){
		index+=n[i]-'0';
	}
	if(index%3==0){
		sort(n.begin(),n.end(),greater<int>());
		if(n[n.length()-1]=='0'){
			cout<<n;
		}else{
			cout<<"-1";
		}
	}else{
		cout<<"-1";
	}
	
	return 0;
}
