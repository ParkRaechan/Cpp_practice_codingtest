#include <iostream>
#include <queue>
using namespace std;
int arr[101][101];
int rarr[101][101];
int xx[]={1,-1,0,0};
int yy[]={0,0,1,-1};
int n,m,result=999999999;
queue<pair<int,int>> q;
void Solve(){
	q.push({0,0});
	rarr[0][0]=0;
	while(!q.empty()){
		int x=q.front().first,y=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int xr=x+xx[i];
			int yr=y+yy[i];
			if(xr>=0&&xr<n&&yr>=0&&yr<m){
				if(arr[xr][yr]==1){
					if(rarr[xr][yr]>rarr[x][y]+1){
						rarr[xr][yr]=rarr[x][y]+1;
						q.push({xr,yr});
					}
				}else{
					if(rarr[xr][yr]>rarr[x][y]){
						rarr[xr][yr]=rarr[x][y];
						q.push({xr,yr});
					}
				}
			}else continue;
		}
	}
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>m>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char c;	cin>>c;
			arr[i][j]=c-48;
			rarr[i][j]=999999999;
		}
	}
	Solve();
	cout<<rarr[n-1][m-1];
	
	return 0;
}
