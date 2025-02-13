#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k;
	cin>>n>>k;
	for(int i=0;i<n;i++){
		int temp;cin>>temp;
		v.push_back(temp);
	}
	sort(v.begin(),v.end());
	cout<<v[k-1];
	
	return 0;
}
