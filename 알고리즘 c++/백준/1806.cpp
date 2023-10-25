#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,s;	cin>>n>>s;
	for(int i=0;i<n;i++){
		int index;	cin>>index;
		v.push_back(index);
	}
	int start=0,end=0,sum=0,mini=100001;
	while(start<=end){
		if(sum>=s){
			mini=min(mini,end-start);
			sum-=v[start++];
		}else if(end==n) break;
		else sum+=v[end++];
	}
	if(mini==100001) cout<<"0";
	else cout<<mini;
	
	return 0;
}
