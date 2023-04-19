#include <iostream>
#include <vector>
using namespace std;
typedef long long ll;
ll init(vector<ll> &arr,vector<ll> &tree,int node,int start,int end){
	if(start==end) return tree[node]=arr[start];
	int mid=(start+end)/2;
	return tree[node]=init(arr,tree,node*2,start,mid)+init(arr,tree,node*2+1,mid+1,end);
}
void update(vector<ll> &tree,int node,int start,int end,int index,ll diff){
	if(!(start<=index&&index<=end)) return;
	tree[node]+=diff;
	if(start!=end){
		int mid=(start+end)/2;
		update(tree,node*2,start,mid,index,diff);
		update(tree,node*2+1,mid+1,end,index,diff);
	}
}
ll sum(vector<ll> &tree,int node,int start,int end,int left,int right){
	if(left>end||right<start) return 0;
	if(left<=start&&right>=end) return tree[node];
	int mid=(start+end)/2;
	return sum(tree,node*2,start,mid,left,right)+sum(tree,node*2+1,mid+1,end,left,right);
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m,k;
	cin>>n>>m>>k;
	vector<ll> arr(n); vector<ll> tree(4*n);
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	init(arr,tree,1,0,n-1);
	
	int count=m+k,select;
	while(count--){
		cin>>select;
		if(select==1){
			int position; ll value,differ;
			cin>>position>>value;
			differ=value-arr[position-1];
			arr[position-1]=value;
			update(tree,1,0,n-1,position-1,differ);
		}else if(select==2){
			int left,right;
			cin>>left>>right;
			cout<<sum(tree,1,0,n-1,left-1,right-1)<<"\n";
		}
	}
	
	return 0;
}
