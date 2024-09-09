#include <iostream>
#include <queue>
using namespace std;
bool visit[100001];
int arr[100001];
int res[100001];
queue<pair<int,int>> q;
int n,k;
void Solve(){
	
	q.push({n,0});
	visit[n]=true;
	
	while(!q.empty()){
		int a=q.front().first,b=q.front().second;
		q.pop();
		
		if(a==k){
			cout<<b<<"\n";
			int ad=k;
			for(int i=b;i>=0;i--){
				res[i]=ad;
				ad=arr[ad];
			}
			for(int i=0;i<=b;i++){
				cout<<res[i]<<" ";
			}
			return;
		}
		
		int rd_1=a-1,rd_2=a+1,rd_3=a*2;
		if(rd_1>=0&&rd_1<=100000){
			if(!visit[rd_1]){
				visit[rd_1]=true;
				arr[rd_1]=a;
				q.push({rd_1,b+1});
			}
		}
		if(rd_2>=0&&rd_2<=100000){
			if(!visit[rd_2]){
				visit[rd_2]=true;
				arr[rd_2]=a;
				q.push({rd_2,b+1});
			}
		}
		if(rd_3>=0&&rd_3<=100000){
			if(!visit[rd_3]){
				visit[rd_3]=true;
				arr[rd_3]=a;
				q.push({rd_3,b+1});
			}
		}
	}
	
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>k;
	Solve();
	
	return 0;
}
