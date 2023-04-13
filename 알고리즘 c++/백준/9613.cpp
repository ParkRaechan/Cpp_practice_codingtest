#include <iostream>
typedef long long ll;
using namespace std;
int gcd(int a,int b){
	if(a>=b){
		while(1){
			int re=a%b; if(re==0) return b;
			a=b;	b=re;
		}
	}else{
		return gcd(b,a);
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t,n;
	cin>>t;
	while(t--){
		cin>>n;		ll arr[n],sum=0;
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		for(int i=1;i<n;i++){
			for(int j=0;j<i;j++){
				sum+=gcd(arr[i],arr[j]);
			}
		}
		cout<<sum<<"\n";
	}
	
	return 0;
}
