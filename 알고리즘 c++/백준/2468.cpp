#include <iostream>

using namespace std;
int n,B=0;
int arr[101][101];
bool visited[101][101];
int ar1[4]={-1,1,0,0};
int ar2[4]={0,0,-1,1};
void ReSolve(int x,int y,int d){
	visited[x][y]=true;
	for(int g=0;g<4;g++){
		int rx=x+ar1[g];	int ry=y+ar2[g];
		if(rx>=0&&rx<n&&ry>=0&&ry<n){
			if(arr[rx][ry]>d&&visited[rx][ry]==false) ReSolve(rx,ry,d);
		}
	}
}
int Solve(int d){
	int a=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(arr[i][j]>d&&visited[i][j]==false){
				a++;
				ReSolve(i,j,d);
			}
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			visited[i][j]=false;
		}
	}
	
	return a;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
			if(arr[i][j]>B) B=arr[i][j];
		}
	}
	int result=0;
	for(int i=0;i<B;i++){
		int v=Solve(i);
		if(v>result) result=v;
	}
	cout<<result;
	
	return 0;
}
