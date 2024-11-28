#include <iostream>

using namespace std;
int arr[51][51];
int xrange[4]={-1,0,0,1};
int yrange[4]={0,-1,1,0};
int count=0,m,n;
void Solve(int x,int y){
	arr[x][y]=2;
	for(int i=0;i<4;i++){
		int rx=x+xrange[i];
		int ry=y+yrange[i];
		if(rx>=0&&rx<m&&ry>=0&&ry<n){
			if(arr[rx][ry]==1){
				Solve(rx,ry);
			}
		}
	}
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		count=0;
		for(int i=0;i<=49;i++){
			for(int j=0;j<=49;j++){
				arr[i][j]=0;
			}
		}
		int k; cin>>m>>n>>k;
		for(int i=0;i<k;i++){
			int x,y; cin>>x>>y;
			arr[x][y]=1;
		}
		for(int i=0;i<=m-1;i++){
			for(int j=0;j<=n-1;j++){
				if(arr[i][j]==1){
					Solve(i,j);
					count++;
				}else{
					continue;
				}
			}
		}
		cout<<count<<"\n";
	}
	
	return 0;
}
