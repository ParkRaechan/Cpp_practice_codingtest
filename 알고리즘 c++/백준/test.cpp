#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,int>> v; 
bool compare1(pair<int, int> a, pair<int, int> b) {
	if(a.first==b.first) return a.second < b.second;
	return a.first > b.first;
}
bool compare2(pair<int, int> a, pair<int, int> b) {
	if(a.second==b.second) return a.first > b.first;
	return a.second < b.second;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	//test
	cin>>n;
	for(int i=0;i<n;i++){
		int a,b;
		cin>>a>>b;
		v.push_back({a,b});
	}
	sort(v.begin(),v.end(),compare1);
	cout<<v[0].first<<" "<<v[0].second<<" "<<v[1].first<<" "<<v[1].second<<"\n";
	sort(v.begin(),v.end(),compare2);
	cout<<v[0].first<<" "<<v[0].second<<" "<<v[1].first<<" "<<v[1].second<<"\n";
	
	return 0;
}
