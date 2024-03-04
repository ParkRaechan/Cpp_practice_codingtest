#include <iostream>

using namespace std;
long long CalculLength(int n){
	long long len=0;
	for(int start=1,i=1;start<=n;start*=10,++i){
		int end=start*10-1;
		if(end>n) end=n;
		len+=(long long)(end-start+1)*i;
	}
	return len;
}
int Search(int left,int right,int target){
	if(left>=right) return right;
	int mid=(left+right)/2;
	long long len=CalculLength(mid);
	if(len<target) return Search(mid+1,right,target);
	else return Search(left,mid,target);
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	long long n,k;
	cin>>n>>k;
	if(CalculLength(n)<k){
		cout<<"-1"; return 0;
	}
	int num=Search(1,n,k);
	int num_len=CalculLength(num);
	string s_num=to_string(num);
	cout<<s_num[s_num.size()-1-(num_len-k)];
	
	return 0;
}
