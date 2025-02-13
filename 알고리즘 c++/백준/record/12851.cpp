#include <iostream>
#include <queue>
using namespace std;
queue<pair<int,int>> q;
bool arr[100001];
bool first=true;
int result1=999999,result2=0;
void Solve(int n,int k){
	q.push({n,0});
	while(!q.empty()){
		int index1=q.front().first;
		int index2=q.front().second;
		q.pop();
		arr[index1]=true;
		
		//
		if(!first&&result1==index2&&index1==k){
			result2++;
		}
		if(first&&index1==k){
			result1=index2;
			first=false;
			result2++;
		}
		//
		int r_index1=index1-1,r_index2=index1+1,r_index3=index1*2;
		if(r_index1>=0&&r_index1<=100000&&!arr[r_index1]){
			q.push({r_index1,index2+1});
		}
		if(r_index2>=0&&r_index2<=100000&&!arr[r_index2]){
			q.push({r_index2,index2+1});
		}
		if(r_index3>=0&&r_index3<=100000&&!arr[r_index3]){
			q.push({r_index3,index2+1});
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k; cin>>n>>k;
	Solve(n,k);
	cout<<result1<<"\n"<<result2;
	
	return 0;
}
