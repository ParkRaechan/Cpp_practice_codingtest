#include <iostream>
#include <vector>
using namespace std;
bool arr[4000001];
vector<int> v;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;	cin>>n;
	if(n==1){
		cout<<"0"; return 0;
	}
	arr[1]=true;
	for(int i=2;i<=n/2;i++){
		if(arr[i]==false){
			for(int j=2;(j*i)<=n;j++){
				arr[j*i]=true;
			}
		}
	}
	for(int i=2;i<=n;i++){
		if(arr[i]==false) v.push_back(i);
	}
	
	int start=0,end=0,sum=0,result=0;
	while(start<=end&&end<=v.size()){
		if(sum==n){
			result++;
			sum-=v[start++];
		}else if(sum>n) sum-=v[start++];
		else sum+=v[end++];
	}
	cout<<result;
	
	return 0;
}
