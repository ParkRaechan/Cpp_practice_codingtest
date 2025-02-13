#include <iostream>

using namespace std;
int N,M;
int arr[5001];
bool Solve(int d){
	int mn=arr[0],MX=arr[0],count=0;
	for(int i=0;i<=N;i++){
		mn=min(mn,arr[i]);
		MX=max(MX,arr[i]);
		int dis=MX-mn;
		if(dis>d){
			count++;
			mn=MX=arr[i];
		}
	}
	
	return count<=M;
}
int Find(){
	int sta=-1,end=10000;
	while(sta+1<end){
		int mid=(sta+end)/2;
		if(Solve(mid)) end=mid;
		else sta=mid;
	}
	return end;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>N>>M;
	for(int i=0;i<N;i++){
		cin>>arr[i];
	}
	arr[N]=100000;
	cout<<Find();
	
	return 0;
}
