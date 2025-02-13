#include <iostream>
#include <set>
typedef long long ll;
using namespace std;
set<ll> st;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	ll n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		ll index;
		cin>>index;
		st.insert(index);
	}
	cin>>m;
	for(int i=0;i<m;i++){
		ll index;
		cin>>index;
		if(st.find(index)!=st.end()){
			cout<<"1 ";
		}else cout<<"0 ";
	}
	
	return 0;
}
