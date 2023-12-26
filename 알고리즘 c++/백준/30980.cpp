#include <iostream>

using namespace std;
char arr[211][561];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;
	cin>>n>>m;
	for(int i=0;i<3*n;i++){
		for(int j=0;j<8*m;j++){
			cin>>arr[i][j];
		}
	}
	int a,b,c; bool rw=false;
	int a_x=1,a_y=1,b_x=3,c_x=6;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			a=arr[a_y][a_x]-'0'; b=arr[a_y][b_x]-'0';
			if(arr[a_y][c_x]=='.'){
				c=arr[a_y][c_x-1]-'0';
				rw=false;
			}else{
				c=(arr[a_y][c_x]-'0')+(arr[a_y][c_x-1]-'0')*10;
				rw=true;
			}
			
			if(c==a+b){
				if(rw==true){
					for(int iw=a_x;iw<=c_x;iw++){
						arr[a_y-1][iw]='*';
						arr[a_y+1][iw]='*';
					}
					arr[a_y][a_x-1]='*';
					arr[a_y][c_x+1]='*';
				}else{
					for(int iw=a_x;iw<c_x;iw++){
						arr[a_y-1][iw]='*';
						arr[a_y+1][iw]='*';
					}
					arr[a_y][a_x-1]='*';
					arr[a_y][c_x]='*';
				}
			}else{
				arr[a_y-1][b_x]='/';
				arr[a_y][a_x+1]='/';
				arr[a_y+1][a_x]='/';
			}
			
			a_x+=8;b_x+=8;c_x+=8;
		}
		a_x=1;b_x=3;c_x=6;a_y+=3;
	}
	
	for(int i=0;i<3*n;i++){
		for(int j=0;j<8*m;j++){
			cout<<arr[i][j];
		}
		cout<<"\n";
	}
	
	return 0;
}
