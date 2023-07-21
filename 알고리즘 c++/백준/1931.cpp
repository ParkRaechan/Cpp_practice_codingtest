#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int>> v;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;	cin>>a>>b;
		v.push_back({b,a});
	}
	sort(v.begin(),v.end());
	int index=v[0].first;
	int count=1;
	for(int i=1;i<n;i++){
		if(index<=v[i].second){
			count++;	index=v[i].first;
		}
	}
	cout<<count;
	
	return 0;
}
