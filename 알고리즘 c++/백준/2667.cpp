#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int aprt[26][26];
int visit[26][26];
vector<long long> result;
long long re_ind=1;
void dfs(int x,int y){
	visit[x][y]=1;
	if(aprt[x][y]==1){
		if(aprt[x-1][y]==1&&visit[x-1][y]==0){
			re_ind++;
			dfs(x-1,y);
		}if(aprt[x+1][y]==1&&visit[x+1][y]==0){
			re_ind++;
			dfs(x+1,y);
		}if(aprt[x][y-1]==1&&visit[x][y-1]==0){
			re_ind++;
			dfs(x,y-1);
		}if(aprt[x][y+1]==1&&visit[x][y+1]==0){
			re_ind++;
			dfs(x,y+1);
		}
		if(re_ind==1) result.push_back(re_ind);
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; char in;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>in;
			aprt[i][j]=in-'0';
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(visit[i][j]!=1) {
				re_ind=1;
				dfs(i,j);
				if(re_ind!=1) result.push_back(re_ind);
			}
		}
	}
	cout<<result.size()<<"\n";
	sort(result.begin(),result.end());
	for(int i=0;i<result.size();i++){
		cout<<result[i]<<"\n";
	}
	
	return 0;
}
