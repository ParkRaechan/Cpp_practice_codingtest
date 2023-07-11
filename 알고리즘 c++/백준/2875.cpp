#include <iostream>

using namespace std;
void intern(int n,int m,int k){
	int a=n/2;	int b=m;	int mini=min(a,b);
	if(mini==0){
		cout<<"0"; return;
	}
	int disc=(n-(mini*2))+(m-mini);
	if(disc>=k){
		cout<<mini;
		return;
	}else{
		n=mini*2;	m=mini;
		int index=k-disc;
		int rest=index%3;
		index/=3;
		n-=index*2; m-=index;
		n-=rest;
		intern(n,m,0);
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m,k;	cin>>n>>m>>k;
	intern(n,m,k);
	
	return 0;
}
