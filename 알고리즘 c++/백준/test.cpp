#include <iostream>
#include <algorithm>
using namespace std;
char arr[3][3];
bool visit[3][3];
int ar1[4]={-1,0,0,1};
int ar2[4]={0,-1,1,0};
int result_arr[4];
int result_index=0;
int index=0;
bool check(int x,int y){
	if(x>=0&&x<=2&&y>=0&&y<=2) return true;
	return false;
}
void number(int x,int y){
	visit[x][y]=true;
	for(int i=0;i<4;i++){
		int r_x=x+ar1[i];	int r_y=y+ar2[i];
		if(visit[r_x][r_y]!=true&&check(r_x,r_y)&&arr[r_x][r_y]=='O'){
			index++;
			number(r_x,r_y);
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;	cin>>t;
	while(t--){
		for(int i=0;i<3;i++){
			string s;	cin>>s;
			arr[i][0]=s[0];	arr[i][1]=s[1];	arr[i][2]=s[2];
		}
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				bool addi=false;
				if(visit[i][j]!=true&&arr[i][j]=='O'){
					addi=true;
					index++;
					number(i,j);
				}
				visit[i][j]=true;
				if(addi==true){
					result_arr[result_index]=index;
					result_index++;
				}
				index=0;
			}
		}
		int n;	cin>>n;
		sort(result_arr,result_arr+result_index);
		if(n==0){
			if(result_arr[0]==0) cout<<"1\n";
			else cout<<"0\n";
		}
		for(int i=0;i<n;i++){
			int inse;	cin>>inse;
			if(inse!=result_arr[i]){
				cout<<"0\n";
				break;
			}
			if(i==n-1) cout<<"1\n";
		}
		for(int i=0;i<4;i++) result_arr[i]=0;
		result_index=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				visit[i][j]=false;
			}
		}
	}
	
	return 0;
}
