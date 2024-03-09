#include <iostream>
#include <queue>
using namespace std;
int arr[301][301];
bool visited[301][301];
int arr11[4]={1,2,2,1};
int arr22[4]={2,1,-1,-2};
int r_x,r_y,i,result;
queue<pair<int,int>> q;
int Solve(){
	
	while(!q.empty()){
		int a=q.front().first;int b=q.front().second;
		q.pop();
		if(a==r_x&&b==r_y){
			result=arr[a][b];
			break;
		}
		
		for(int d=0;d<4;d++){
			int xr=a+arr11[d]; int yr=b+arr22[d];
			if((xr>=0&&xr<i)&&(yr>=0&&yr<i)){
				if(visited[xr][yr]==false){
					arr[xr][yr]=arr[a][b]+1;visited[xr][yr]=true;
					q.push({xr,yr});
				}
			}
			
			int xr1=a-arr11[d]; int yr1=b-arr22[d];
			if((xr1>=0&&xr1<i)&&(yr1>=0&&yr1<i)){
				if(visited[xr1][yr1]==false){
					arr[xr1][yr1]=arr[a][b]+1;
					q.push({xr1,yr1});visited[xr1][yr1]=true;
				}
			}
		}
	}
	
	return 0;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;cin>>n;
	while(n--){
		cin>>i;
		
		int x_1,y_1;
		cin>>x_1>>y_1;cin>>r_x>>r_y;
		q.push({x_1,y_1});visited[x_1][y_1]=true;
		Solve();
		
		for(int t=0;t<i;t++){
			for(int g=0;g<i;g++){
				arr[t][g]=0;
				visited[t][g]=0;
			}
		}
		
		cout<<result<<"\n";
		while(!q.empty()){
			q.pop();
		}
	}
	
	
	return 0;
}
