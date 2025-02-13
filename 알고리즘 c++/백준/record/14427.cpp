#include <iostream>

using namespace std;
int a[100001];
int tree[100000*4+1];
int mini(int x,int y){
	if(a[x]==a[y]) return x<y? x:y;
	return a[x]<a[y]? x:y;
}
int init(int start,int end,int node){
	if(start==end) return tree[node]=start;
	int mid=(start+end)/2;
	return tree[node]=mini(init(start,mid,node*2),init(mid+1,end,node*2+1));
}
int update(int start,int end,int node,int index){
	if(index<start||index>end||start==end) return tree[node];
	int mid=(start+end)/2;
	return tree[node]=mini(update(start,mid,node*2,index),update(mid+1,end,node*2+1,index));
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	cin>>m;
	init(0,n-1,1);
	while(m--){
		int selle,index,valu;
		cin>>selle;
		if(selle==1){
			cin>>index>>valu;
			index--;
			a[index]=valu;
			update(0,n-1,1,index);
		}else{
			cout<<tree[1]+1<<"\n";
		}
	}
	
	return 0;
}
