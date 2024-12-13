#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k; cin>>n>>k;
	for(int i=1;i<=n;i++){
		v.push_back(i);
	}
	int index=k-1;
	cout<<"<";
	for(int i=0;i<n-1;i++){
		cout<<v[index]<<", ";
		v.erase(v.begin()+index);
		index+=k-1;
		if(index>=v.size()) index%=v.size();
	}
	cout<<v[0]<<">";
	
	return 0;
}
