#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
vector<int> result;
int n,s,result_cnt=0;
void Solve(int d,int sum){
	if(sum==s){
		result_cnt++;
		return;
	}
	
	for(int i=d;i<n;i++){
		result.push_back(v[i]);
		Solve(i+1);
		result.pop_back();
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
	Solve(0);
	cout<<result_cnt;
	
	return 0;
}
