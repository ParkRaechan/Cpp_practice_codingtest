#include <iostream>
#include <cstring>
#include <string>
using namespace std;

int n,m,k,result;
char array[100][100];
int dp[100][100][80];

string dest;
int dest_length;

int dx[]={0,0,1,-1};
int dy[]={1,-1,0,0};

int Dfs(int x,int y,int index){
	if(dp[x][y][index]!=-1) return dp[x][y][index];
	if(index>=dest_length) return 1;
	
	dp[x][y][index]=0;
	for(int i=0;i<4;i++){
		for(int j=1;j<=k;j++){
			int nx=x+dx[i]*j;
			int ny=y+dy[i]*j;
			if(nx<0||ny<0||nx>=n||ny>=m) continue;
			if(array[nx][ny]!=dest[index]) continue;
			dp[x][y][index]=dp[x][y][index]+Dfs(nx,ny,index+1);
		}
	}
	return dp[x][y][index];
}
void Solve(){
	char temp=dest[0];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(array[i][j]==temp) result=result+Dfs(i,j,1);
		}
	}
	cout<<result;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m>>k;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>array[i][j];
		}
	}
	cin>>dest;
	dest_length=dest.length();
	memset(dp,-1,sizeof(dp));
	Solve();
	
	return 0;
}
