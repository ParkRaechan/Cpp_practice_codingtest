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
	long long start=1,end=1000000001,mid;
	while(start<=end){
		mid=(start+end)/2;
		long long index=((y+mid)*100)/(x+mid);
		if(index>a){
			end=mid-1;
		}else if(index<=a){
			start=mid+1;
		}
	}
	cout<<start;
	
	return 0;
}
