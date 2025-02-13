#include <iostream>
#include <vector>
using namespace std;
int n,result=100000000;
int arr[11][11];
bool visit[11];
vector<int> v;
void solve(){
	if(v.size()==n){
		int temp=arr[v.back()][v.front()];
		if(temp==0) return;
		for(int i=1;i<n;i++){
			temp+=arr[v[i-1]][v[i]];
		}
		result=min(result,temp);
		return;
	}
	for(int i=0;i<n;i++){
		if(!v.empty()){
			if(!visit[i]&&arr[v.back()][i]!=0){
				visit[i]=true;
				v.push_back(i);
				solve();
				v.pop_back();
				visit[i]=false;
			}
		}else{
			if(!visit[i]){
				visit[i]=true;
				v.push_back(i);
				solve();
				v.pop_back();
				visit[i]=false;
			}
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
	solve();
	cout<<result;
	
	return 0;
}
