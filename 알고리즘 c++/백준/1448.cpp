#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int M1=0,M2=0,M3=0;
	for(int i=0;i<n;i++){
		int index; cin>>index;
		v.push_back(index);
	}
	sort(v.begin(),v.end());
	for(int i=n-1;i>1;i--){
		if(v[i]<(v[i-1]+v[i-2])){
			cout<<v[i]+v[i-1]+v[i-2];
			return 0;
		}
	}
	cout<<"-1";
	
	return 0;
}
