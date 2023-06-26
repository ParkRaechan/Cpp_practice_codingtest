#include <iostream>

using namespace std;
int arr[65][65];
int result;
bool check(int n,int x,int y){
	int a=arr[x][y];
	for(int i=x;i<x+n;i++){
		for(int j=y;j<y+n;j++){
			if(arr[i][j]!=a){
				return false;
			}
		}
	}
	result=a;
	return true;
}
void devide(int n,int x,int y){
	int index=n/2;
	if(check(n,x,y)==true){
		cout<<result;
	}else{
		cout<<"(";
		devide(index,x,y);
		devide(index,x,index+y);
		devide(index,x+index,y);
		devide(index,index+x,index+y);
		cout<<")";
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		string s;
		cin>>s;
		for(int j=0;j<n;j++){
			arr[i][j]=s[j]-'0';
		}
	}
	devide(n,0,0);
	
	return 0;
}
