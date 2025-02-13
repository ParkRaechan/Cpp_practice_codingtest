#include <iostream>

using namespace std;
char arr[6562][6562];
void devide(int n,int x,int y){
	int index=n/3;
	for(int i=x+index;i<x+2*index;i++){
		for(int j=y+index;j<y+2*index;j++){
			arr[i][j]=' ';
		}
	}
	if(index==1) return;
	else{
		devide(index,x,y);
		devide(index,x,y+index);
		devide(index,x,y+2*index);
		
		devide(index,x+index,y);
		devide(index,x+index,y+2*index);
		
		devide(index,x+2*index,y);
		devide(index,x+2*index,y+index);
		devide(index,x+2*index,y+2*index);
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			arr[i][j]='*';
		}
	}
	devide(n,0,0);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cout<<arr[i][j];
		}
		cout<<"\n";
	}
	
	return 0;
}
