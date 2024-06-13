#include <iostream>
#include <queue>
using namespace std;
queue<pair<int,int>> q;
bool arr[100001];
int Solve(int n,int k){
	q.push({n,0});
	
	while(!q.empty()){
		int index1=q.front().first;
		int index2=q.front().second;
		q.pop();
		
		arr[index1]=true;
		
		if(index1==k){
			return index2;
		}
		
		int ri1=index1-1,ri2=index1+1,ri3=index1*2;
		if(ri3>=0&&ri3<=100000){
			if(!arr[ri3]){
				q.push({ri3,index2});
			}
		}if(ri1>=0&&ri1<=100000){
			if(!arr[ri1]){
				q.push({ri1,index2+1});
			}
		}if(ri2>=0&&ri2<=100000){
			if(!arr[ri2]){
				q.push({ri2,index2+1});
			}
		}
	}
	return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k; cin>>n>>k;
	cout<<Solve(n,k);
	
	return 0;
}
