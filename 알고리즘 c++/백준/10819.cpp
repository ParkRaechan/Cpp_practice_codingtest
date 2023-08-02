#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int n,result=0;
int arr[9];
bool visit[9];
vector<int> v;
void solve(){
	if(v.size()==n){
		int index=0;
		for(int i=0;i<n-1;i++){
			index+=abs(v[i]-v[i+1]);
		}
		result=max(result,index);
		return;
	}
	for(int i=0;i<n;i++){
		if(!visit[i]){
			visit[i]=true;
			v.push_back(arr[i]);
			solve();
			v.pop_back();
			visit[i]=false;
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	solve();
	cout<<result;
	
	return 0;
}
