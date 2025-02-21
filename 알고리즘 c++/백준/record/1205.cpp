#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,t,p; cin>>n>>t>>p;
	int result=-1;
	for(int i=0;i<n;i++){
		int index; cin>>index;
		v.push_back(index);
		if(result==-1&&t>=v[i]){
			result=i+1;
		}
	}
	if(result==-1&&n!=p){
		result=n+1;
	}
	if(n==0) result=1;
	if(n==p){
		if(t==v[n-1]){
			result=-1;
		}
	}
	cout<<result;
	
	return 0;
}
