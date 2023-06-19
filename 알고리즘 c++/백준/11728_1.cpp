#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		int index;	cin>>index;
		v.push_back(index);
	}
	for(int i=0;i<m;i++){
		int index;	cin>>index;
		v.push_back(index);
	}
	sort(v.begin(),v.end());
	reverse(v.begin(),v.end());
	for(int i=0;i<(n+m);i++){
		cout<<v.back()<<" ";
		v.pop_back();
	}
	
	return 0;
}
