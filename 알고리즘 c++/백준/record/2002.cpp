#include <iostream>
#include <vector>
#include <map>
using namespace std;
map<string,int> m;
vector<int> v;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	for(int i=0;i<n;i++){
		string s; cin>>s; m[s]=i;
	}
	v.resize(n,0);
	for(int i=0;i<n;i++){
		string s; cin>>s; v[i]=m[s];
	}
	int count=0;
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			if(v[i]>v[j]){
				count++; break;
			}
		}
	}
	cout<<count;
	
	return 0;
}
