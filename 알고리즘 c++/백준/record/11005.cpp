#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,b;	string result;
	cin>>n>>b;
	while(1){
		int index=n%b;
		if(index<10) result+='0'+index;
		else result+=index-10+'A';
		if(n<b) break;
		n/=b;
	}
	reverse(result.begin(),result.end());	cout<<result;
	
	return 0;
}
