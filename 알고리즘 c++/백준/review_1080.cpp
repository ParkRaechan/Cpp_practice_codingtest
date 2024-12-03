#include <iostream>

using namespace std;
int arr[51][51];
int arr2[51][51];
int n,m;
void Solve2(int x,int y){
	if(arr[x][y]==0) arr[x][y]=1;
	else if(arr[x][y]==1) arr[x][y]=0;
	return;
}
bool Solve(int x,int y){
	int xx=x+2,yy=y+2;
	if(xx>n||yy>m) return false;
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			int rx=x+i,ry=y+j;
			Solve2(rx,ry);
		}
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		string s; cin>>s;
		for(int j=0;j<m;j++){
			arr[i][j+1]=s[j]-'0';
		}
	}
	for(int i=1;i<=n;i++){
		string s; cin>>s;
		for(int j=0;j<m;j++){
			arr2[i][j+1]=s[j]-'0';
		}
	}
	int result=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			if(arr[i][j]!=arr2[i][j]){
				if(Solve(i,j)){
					result++;
				}else{
					cout<<"-1";
					return 0;
				}
			}
		}
	}
	cout<<result;
	
	return 0;
}
