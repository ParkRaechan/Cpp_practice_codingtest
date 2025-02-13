#include <iostream>
#include <vector>
using namespace std;
vector<long long> v(400004);
int Solve(int start,int end,int node){
	if(start==end) return v[node]=1;
	
	int mid=(start+end)/2;
	return v[node]=Solve(start,mid,node*2)+Solve(mid+1,end,node*2+1);
}
int GetNum(int start,int end,int node,int index){
	v[node]--;
	
	if(start==end) return start;
	
	int mid=(start+end)/2;
	if(index<=v[node*2]) return GetNum(start,mid,node*2,index);
	else return GetNum(mid+1,end,node*2+1,index-v[node*2]);
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k; cin>>n>>k;
	Solve(1,n,1);
	
	cout<<"<";
	int index=k-1;
	for(int i=0;i<n-1;i++){
		cout<<GetNum(1,n,1,index+1)<<", ";
		if(v[1]==0) break;
		
		index+=k-1;
		index%=v[1];
	}
	cout<<GetNum(1,n,1,index+1)<<">";
	
	return 0;
}
