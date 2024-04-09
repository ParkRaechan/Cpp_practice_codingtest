#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<string> v;
int result=0,n;
void Solve(string wd){
	int start=0,end=n-1;
	while(end>=start){
		int mid=(start+end)/2;
		if(v[mid]==wd){
			result++;return;
		}else if(v[mid]>wd){
			end=mid-1;
		}else{
			start=mid+1;
		}
	}
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int m;cin>>n>>m;
	for(int i=0;i<n;i++){
		string index;cin>>index;
		v.push_back(index);
	}
	sort(v.begin(),v.end());
	for(int i=0;i<m;i++){
		string index;cin>>index;
		Solve(index);
	}
	cout<<result;
	
	return 0;
}
