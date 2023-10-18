#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
vector<int> v;
int n,s,result_cnt=0;
void Solve(int d,int sum){
	if(sum>s&&v[d]>0) return;
	if(d!=0&&sum==s){
		result_cnt++;
	}
	
	for(int i=d;i<n;i++){
		Solve(i+1,sum+v[i]);
	}
	
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>s;
	for(int i=0;i<n;i++){
		int index;	cin>>index;
		v.push_back(index);
	}
	sort(v.begin(),v.end());
	Solve(0,0);
	cout<<result_cnt;
	
	return 0;
}
