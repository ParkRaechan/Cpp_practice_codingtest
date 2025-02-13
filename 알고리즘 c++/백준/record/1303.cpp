#include <iostream>
#include <queue>
using namespace std;
int n,m;
char arr[101][101];
bool arr_v[101][101];
int xx[4]={-1,0,0,1};
int yy[4]={0,-1,1,0};
queue<pair<int,int>> q;
int result_B=0,result_W=0;
void Solve(int x,int y,char c){
	q.push({x,y});
	arr_v[x][y]=true;
	int result=1;
	while(!q.empty()){
		int zx=q.front().first,zy=q.front().second;
		q.pop();
		for(int i=0;i<4;i++){
			int rx=zx+xx[i],ry=zy+yy[i];
			if(rx>=0&&rx<m&&ry>=0&&ry<n){
				if(!arr_v[rx][ry]){
					if(arr[rx][ry]==c){
						q.push({rx,ry});
						arr_v[rx][ry]=true;
						result++;
					}
				}
			}
		}
	}
	if(c=='B'){
		result_B+=result*result;
	}else{
		result_W+=result*result;
	}
	
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(!arr_v[i][j]){
				Solve(i,j,arr[i][j]);
			}
		}
	}
	cout<<result_W<<" "<<result_B;
	
	return 0;
}
