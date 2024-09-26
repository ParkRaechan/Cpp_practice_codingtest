#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> vR;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m; cin>>n>>m;
	for(int i=0;i<n;i++){
		int a,b; cin>>a>>b;
		vector<int> v;
		for(int j=0;j<a;j++){
			int index; cin>>index;
			v.push_back(index);
		}
		if(b>a){
			vR.push_back(1);
		}else{
			sort(v.begin(),v.end());
			vR.push_back(v[a-b]);
		}
	}
	sort(vR.begin(),vR.end());
	reverse(vR.begin(),vR.end());
	int result=0,result_index=0;
	while(!vR.empty()){
		result+=vR.back();
		vR.pop_back();
		if(result<=m){
			result_index++;
		}else{
			break;
		}
	}
	cout<<result_index;
	
	return 0;
}
