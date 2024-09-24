#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<pair<int,pair<int,int>>> v;
int parent[1001];
int N,M,result=0;
int Findd(int x){
	if(parent[x]==x) return x;
	else{
		return parent[x]=Findd(parent[x]);
	}
}
bool Compare(int x,int y){
	if(Findd(x)==Findd(y)) return true;
	else return false;
}
void Sum(int x,int y){
	int a=Findd(x);
	int b=Findd(y);
	if(a!=b) parent[b]=a;
}
void Solve(){
	for(int i=0;i<M;i++){
		int x=v[i].second.first,y=v[i].second.second;
		if(!Compare(x,y)){
			Sum(x,y);
			result+=v[i].first;
		}
	}
	cout<<result;
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>N>>M;
	for(int i=0;i<M;i++){
		int index_1,index_2,index_3; cin>>index_1>>index_2>>index_3;
		v.push_back({index_3,{index_1,index_2}});
	}
	sort(v.begin(),v.end());
	
	for(int i=1;i<=N;i++){
		parent[i]=i;
	}
	Solve();
	
	return 0;
}
