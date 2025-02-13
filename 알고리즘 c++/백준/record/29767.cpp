#include <iostream>
#include <algorithm>
using namespace std;
int N,K;
long long arr[300002];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>N>>K;
	for(int i=1;i<=N;i++){
		cin>>arr[i];
		arr[i]+=arr[i-1];
	}
	sort(arr+1,arr+N+1,greater<>());
	long long result=0;
	for(int i=1;i<=K;i++){
		result+=arr[i];
	}
	cout<<result;
	
	return 0;
}
