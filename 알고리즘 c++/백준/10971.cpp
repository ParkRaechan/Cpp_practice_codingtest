#include <iostream>

using namespace std;
int n,result=100000000;
int arr[11][11];
bool visit[11];

void solve(int now,int stk,int sum){
	if(stk==n-1){
		if(arr[now][0]!=0){
			result=min(result,sum+arr[now][0]);
		}
		return;
	}
	for(int i=0;i<n;i++){
		if(visit[i]==0&&arr[now][i]!=0){
			visit[i]=1;
			sum+=arr[now][i];
			if(sum<=result){
				solve(i,stk+1,sum);
			}
			sum-=arr[now][i];
			visit[i]=0;
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	visit[0]=1;
	solve(0,0,0);
	cout<<result;
	
	return 0;
}
