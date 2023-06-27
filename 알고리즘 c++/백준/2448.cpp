#include <iostream>

using namespace std;
char arr[3073][6144];
void draw(int x,int y){
	arr[x][y]='*';
	arr[x+1][y-1]='*';arr[x+1][y+1]='*';
	for(int i=0;i<5;i++){
		arr[x+2][y-2+i]='*';
	}
}
void devide(int length,int x,int y){
	if(length==3){
		draw(x,y);
		return;
	}
	devide(length/2,x,y);
	devide(length/2,x+length/2,y-length/2);
	devide(length/2,x+length/2,y+length/2);
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<2*n-1;j++){
			arr[i][j]=' ';
		}
	}
	
	devide(n,0,n-1);
	for(int i=0;i<n;i++){
        for(int j=0;j<2*n-1;j++){
            cout<<arr[i][j];
        }
		cout<<"\n";
    }
	
	return 0;
}
