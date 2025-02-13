#include <iostream>
#include <vector>
#include <queue>
using namespace std;
int n;
vector<pair<int,int>> ve[5001];
queue<int> qu;
bool visit[5001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int q; cin>>n>>q;
	for(int i=1;i<=n-1;i++){
		int p,q,r; cin>>p>>q>>r;
		ve[p].push_back({q,r});
		ve[q].push_back({p,r});
	}
	
	for(int i=0;i<q;i++){
		int k,v; cin>>k>>v;
		int result=0;
		qu.push(v);
		visit[v]=true;
		while(!qu.empty()){
			int index=qu.front(); qu.pop();
			for(int i=0;i<ve[index].size();i++){
				int index2=ve[index][i].first;
				int index3=ve[index][i].second;
				if(!visit[index2]){
					if(index3>=k){
						result++;
						qu.push(index2);
						visit[index2]=true;
					}
				}
			}
		}
		cout<<result<<"\n";
		for(int i=0;i<=n;i++){
			visit[i]=false;
		}
	}
	
	return 0;
}
