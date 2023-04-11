#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
ll init(vector<ll> &tree,int start,int end,int node){
	if(start==end) return tree[node]=1;		int mid=(start+end)/2;
	return tree[node]=init(tree,start,mid,node*2)+init(tree,mid+1,end,node*2+1);
}
int get_num(vector<ll> &tree,int start,int end,int node,int index){
	tree[node]--;
	if(start==end) return start;	int mid=(start+end)/2;
	if(index>tree[node*2]) return get_num(tree,mid+1,end,node*2+1,index-tree[node*2]);
	else return get_num(tree,start,mid,node*2,index);
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k;
	cin>>n>>k;
	vector<ll> tree(4*n);
	init(tree,1,n,1);
	int index=k-1;
	cout<<"<";
	for(int i=1;i<=n;i++){
		int get_index=get_num(tree,1,n,1,index+1);
		if(i!=n) cout<<get_index<<", ";
		else cout<<get_index;
		if(tree[1]==0) break;
		
		index+=k-1;
		index%=tree[1];
	}
	cout<<">";
	
	return 0;
}
