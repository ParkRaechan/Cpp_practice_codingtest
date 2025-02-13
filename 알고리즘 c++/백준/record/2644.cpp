#include <iostream>
#include <vector>
using namespace std;
vector<int> v[101];
bool arr[101];
int x,y,result=0;
int Solve(int d,int index){
	if(d==y){
		return index;
	}
	arr[d]=true;
	for(int i=0;i<v[d].size();i++){
		if(!arr[v[d][i]]){
			int a=Solve(v[d][i],index+1);
			if(a!=-1) return a;
		}
	}
	return -1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	cin>>x>>y;
	int k; cin>>k;
	for(int i=0;i<k;i++){
		int index_1,index_2; cin>>index_1>>index_2;
		v[index_1].push_back(index_2);
		v[index_2].push_back(index_1);
	}
	cout<<Solve(x,0);
	
	return 0;
}
