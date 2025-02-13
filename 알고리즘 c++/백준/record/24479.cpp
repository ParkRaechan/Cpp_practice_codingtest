#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v[100001];
int arr[100001];
int index=1;
void Solve(int start){
	arr[start]=index;
	if(v[start].size()!=0){
		for(int i=0;i<v[start].size();i++){
			int fd=v[start][i];
			if(arr[fd]==0){
				index++;
				Solve(fd);
			}else{
				if(i==v[start].size()-1) return;
			}
		}
	}else return;
	
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m,r;
	cin>>n>>m>>r;
	for(int i=0;i<m;i++){
		int index_1,index_2;
		cin>>index_1>>index_2;
		v[index_1].push_back(index_2);
		v[index_2].push_back(index_1);
	}
	for(int i=1;i<=n;i++){
		if(v[i].size()!=0) sort(v[i].begin(),v[i].end());
	}
	Solve(r);
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<"\n";
	}
	
	return 0;
}
