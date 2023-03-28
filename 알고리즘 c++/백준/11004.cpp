#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,k;
vector<int> v;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int temp;cin>>temp;
		v.push_back(temp);
	}
	nth_element(v.begin(),v.begin()+(k-1),v.end());
	cout<<v[k-1]<<"\n";
	
	return 0;
}
