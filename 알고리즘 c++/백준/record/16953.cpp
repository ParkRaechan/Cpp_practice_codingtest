#include <iostream>
#include <queue>
using namespace std;
queue<pair<long long,long long>> q;
long long Solve(long long d,long long b){
	q.push({d,1});
	
	while(!q.empty()){
		long long index=q.front().first;
		long long acc=q.front().second;
		q.pop();
		if(index==b){
			return acc;
		}
		long long index1=index*2;
		long long index2=index*10+1;
		if(index1<=b) q.push({index1,acc+1});
		if(index2<=b) q.push({index2,acc+1});
	}
	return -1;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b; cin>>a>>b;
	cout<<Solve(a,b);
	
	return 0;
}
