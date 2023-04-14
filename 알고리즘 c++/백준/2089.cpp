#include <iostream>
#include <algorithm>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; string result;
	cin>>n;
	while(1){
		int index=n%2;
		if(index!=0){
			result+=1+'0';
			n=(n-1)/(-2);
			if(n==0) break;
		}else{
			result+=0+'0';
			n=n/(-2);
			if(n==0) break;
		}
	}
	reverse(result.begin(),result.end());
	cout<<result;
	
	return 0;
}
