#include <iostream>
#include <queue>
using namespace std;
char arr[13][7];
bool visit[13][7];
int xx[4]={-1,0,0,1};
int yy[4]={0,-1,1,0};
int result_index=0;
bool CheckRange(int x,int y){
	if(x>=0&&x<12){
		if(y>=0&&y<6){
			return true;
		}
	}
	return false;
}
bool Solve(){
	bool result=false;
	for(int i=0;i<12;i++){
		for(int j=0;j<6;j++){
			if(!visit[i][j]&&arr[i][j]!='.'){
				queue<pair<int,int>> q;
				queue<pair<int,int>> qwq;
				
				q.push({i,j});
				qwq.push({i,j});
				
				visit[i][j]=true;
				
				int index=1;
				while(!q.empty()){
					int x=q.front().first;
					int y=q.front().second;
					q.pop();
					for(int d=0;d<4;d++){
						int rx=x+xx[d],ry=y+yy[d];
						if(CheckRange(rx,ry)){
							if(!visit[rx][ry]&&(arr[rx][ry]==arr[x][y])){
								visit[rx][ry]=true;
								q.push({rx,ry});
								index++;
								qwq.push({rx,ry});
							}
						}
					}
				}
				if(qwq.size()>=4){
					result=true;
					while(!qwq.empty()){
						int fg=qwq.front().first;
						int fh=qwq.front().second;
						qwq.pop();
						arr[fg][fh]='.';
					}
				}else{
					while(!qwq.empty()){
						qwq.pop();
					}
				}
			}
		}
	}
	
	return result;
}
void Solve2(){
	for(int j=0;j<6;j++){
		int index=0;
		for(int i=11;i>=0;i--){
			if(arr[i][j]=='.'){
				index++;
			}else{
				if(index>0){
					arr[i+index][j]=arr[i][j];
					arr[i][j]='.';
				}
			}
		}
	}
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=0;i<12;i++){
		for(int j=0;j<6;j++){
			cin>>arr[i][j];
		}
	}
	while(1){
		for(int i=0;i<12;i++){
			for(int j=0;j<6;j++){
				visit[i][j]=false;
			}
		}
		if(Solve()){
			Solve2();
			result_index++;
		}
		else break;
	}
	cout<<result_index;
	
	return 0;
}
