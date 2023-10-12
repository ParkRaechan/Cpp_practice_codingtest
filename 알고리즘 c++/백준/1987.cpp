#include <iostream>
using namespace std;
bool Checked[27];
char pin_arr[21][21];
int xx[]={1,-1,0,0};
int yy[]={0,0,-1,1};
int r,c,result=0;
bool Check(int x,int y){
	if(x<r&&x>=0&&y<c&&y>=0){
		return true;
	}
	return false;
}
void Solve(int count,int a,int b){
	if(count>=result) result=count;
	for(int i=0;i<4;i++){
		int a_r=a+xx[i];
		int b_r=b+yy[i];
		if(Check(a_r,b_r)){
			if(Checked[pin_arr[a_r][b_r]-'A']==false){
				if(Checked[pin_arr[a_r][b_r]-'A']==false){
					Checked[pin_arr[a_r][b_r]-'A']=true;
					Solve(count+1,a_r,b_r);
					Checked[pin_arr[a_r][b_r]-'A']=false;
				}
			}
		}
	}
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>r>>c;
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			cin>>pin_arr[i][j];
		}
	}
	Checked[pin_arr[0][0]-'A']=true;
	Solve(1,0,0);
	cout<<result;
	
	return 0;
}
