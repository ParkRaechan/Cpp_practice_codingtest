#include <iostream>
#define MAX 2001
using namespace std;
int n;
int arr[MAX][MAX];
bool visited[MAX][MAX];
int dx[]={0,0,-1,1};
int dy[]={1,-1,0,0};
void dfs(int y,int x){
	if(y<0||x<0||x>=MAX||y>=MAX) return;
	if(arr[y][x]==2||arr[y][x]==0) return;
	arr[y][x]=2;
	for(int i=0;i<4;i++){
		int nx=x+dx[i];
		int ny=y+dy[i];
		dfs(ny,nx);
	}
	return;
}
void Solve(){
	int result_cnt=0;
	for(int i=0;i<MAX;i++){
		for(int j=0;j<MAX;j++){
			if(arr[i][j]==1){
				dfs(i,j);
				result_cnt++;
			}
		}
	}
	if(arr[1000][1000]==2) result_cnt--;
	cout<<result_cnt;
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;cin>>n;
	for(int i=0;i<n;i++){
		int x_1,y_1,x_2,y_2;
		cin>>x_1>>y_1>>x_2>>y_2;
		x_1=(x_1+500)*2;
		y_1=(y_1+500)*2;
		x_2=(x_2+500)*2;
		y_2=(y_2+500)*2;
		for(int j=x_1;j<=x_2;j++){
			arr[y_1][j]=1;
			arr[y_2][j]=1;
		}
		for(int j=y_1;j<=y_2;j++){
			arr[j][x_1]=1;
			arr[j][x_2]=1;
		}
	}
	Solve();
	
	return 0;
}
