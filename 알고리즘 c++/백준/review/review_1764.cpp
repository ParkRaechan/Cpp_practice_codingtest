#include <iostream>
#include <unordered_set>
#include <algorithm>
#include <vector>
using namespace std;
unordered_set<string> st;
vector<string> v;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m; cin>>n>>m;
	for(int i=0;i<n;i++){
		string s; cin>>s;
		st.insert(s);
	}
	int sum=0;
	for(int i=0;i<m;i++){
		string s; cin>>s;
		if(st.find(s)!=st.end()){
			v.push_back(s);
			sum++;
		}
	}
	sort(v.begin(),v.end());
	cout<<sum<<"\n";
	for(int i=0;i<sum;i++){
		cout<<v[i]<<"\n";
	}
	
	return 0;
}
