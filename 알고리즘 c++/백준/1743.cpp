#include <iostream>
#include <queue>
using namespace std;
int n,m;
int arr[101][101];
int xx[4]={-1,0,0,1};
int yy[4]={0,-1,1,0};
queue<pair<int,int>> q;
int M=0;
void Solve(int x,int y){
	q.push({x,y});
	arr[x][y]=2;
	int index=1;
	
	while(!q.empty()){
		int vx=q.front().first;
		int vy=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int rx=vx+xx[i];
			int ry=vy+yy[i];
			if(rx>=0&&rx<n&&ry>=0&&ry<m){
				if(arr[rx][ry]==1){
					arr[rx][ry]=2;
					q.push({rx,ry});
					index++;
				}
			}
		}
	}
	if(index>M){
		M=index;
	}
	
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int k; cin>>n>>m>>k;
	while(k--){
		int r,c; cin>>r>>c;
		arr[r-1][c-1]=1;
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==1) Solve(i,j);
		}
	}
	cout<<M;
	
	return 0;
}
