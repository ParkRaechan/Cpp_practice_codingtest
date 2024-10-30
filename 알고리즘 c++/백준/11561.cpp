#include <iostream>
#define ll unsigned long long
using namespace std;
ll Solve(ll n){
	ll result=0,left=1,right=1000000000;
	while(left<=right){
		ll mid=(left+right)/2;
		ll calc=mid*(mid+1)/2;
		if(calc<=n){
			left=mid+1;
			result=mid;
		}else{
			right=mid-1;
		}
	}
	return result;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	for(int i=0;i<t;i++){
		ll n; cin>>n;
		cout<<Solve(n)<<"\n";
	}
	
	return 0;
}
