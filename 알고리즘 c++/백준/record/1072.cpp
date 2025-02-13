#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long x,y; cin>>x>>y;
	
	long long a=(y*100)/x;
	if(a>=99){
		cout<<"-1";
		return 0;
	}
	int right=1000000000,left=1;
	while(left<=right){
		long long mid=(right+left)/2;
		long long a_1=((y+mid)*100)/(x+mid);
		if(a<a_1) right=mid-1;
		else left=mid+1;
	}
	cout<<left;
	
	return 0;
}
