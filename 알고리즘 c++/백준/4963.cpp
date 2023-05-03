#include <iostream>
#include <vector>
#include <cstring>
using namespace std;

bool visit[51][51];
int result=0;int w,h;
void dfs(vector<int> island[],int x,int y){
	visit[x][y]=true;
	for(int i=-1;i<=1;i++){
		for(int j=-1;j<=1;j++){
			if(x+i<0||y+j<0||(i==0&&j==0)||x+i>h-1||y+j>w-1) continue;
			if(island[x+i][y+j]==1&&visit[x+i][y+j]==false) dfs(island,x+i,y+j);
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	while(1){
		result=0;
		
		cin>>w>>h;
		if(w==0&&h==0) break;
		vector<int> island[h];
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				int index; cin>>index;
				island[i].push_back(index);
			}
		}
		
		for(int i=0;i<h;i++){
			for(int j=0;j<w;j++){
				if(island[i][j]==1&&visit[i][j]==false){
					dfs(island,i,j);
					result++;
				}
			}
		}
		cout<<result<<"\n";
		memset(visit,false,sizeof(visit));
	}
	
	
	return 0;
}
