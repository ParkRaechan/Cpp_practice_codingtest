#include <iostream>
using namespace std;
int n,m;
int arr[51][51];
int xx[8]={-1,-1,-1,0,0,1,1,1};
int yy[8]={-1,0,1,-1,1,-1,0,1};
bool Check(int x,int y){
	if(x>=0&&x<n&&y>=0&&y<m) return true;
	return false;
}
void Solve(int x,int y,int index){
	for(int i=0;i<9;i++){
		int rx=x+xx[i],ry=y+yy[i];
		if(Check(rx,ry)){
			if(arr[rx][ry]>index+1){
				arr[rx][ry]=index+1;
				Solve(rx,ry,index+1);
			}
		}
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			int index; cin>>index;
			if(index==1) arr[i][j]=0;
			else arr[i][j]=999999;
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]==0) Solve(i,j,0);
		}
	}
	int M=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr[i][j]>M) M=arr[i][j];
		}
	}
	cout<<M;
	
	return 0;
}
