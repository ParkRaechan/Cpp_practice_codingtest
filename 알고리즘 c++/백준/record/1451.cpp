#include <iostream>

using namespace std;
int arr[51][51];
int getSum(int x_1,int y_1,int x_2,int y_2){
	int index=0;
	for(int i=x_1;i<=x_2;i++){
		for(int j=y_1;j<=y_2;j++){
			index+=arr[i][j];
		}
	}
	return index;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;	cin>>n>>m;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			char a;	cin>>a;
			arr[i][j]=a-'0';
		}
	}
	
	long long rect_1,rect_2,rect_3,rect;	long long result=0;
	//1
	if(n>=3){
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				rect_1=getSum(0,0,i,m-1);
				rect_2=getSum(i+1,0,j,m-1);
				rect_3=getSum(j+1,0,n-1,m-1);
				rect=rect_1*rect_2*rect_3;
				if(rect>result) result=rect;
			}
		}
	}
	//2
	if(m>=3){
		for(int i=0;i<m-2;i++){
			for(int j=i+1;j<m-1;j++){
				rect_1=getSum(0,0,n-1,i);
				rect_2=getSum(0,i+1,n-1,j);
				rect_3=getSum(0,j+1,n-1,m-1);
				rect=rect_1*rect_2*rect_3;
				if(rect>result) result=rect;
			}
		}
	}
	//3
	if(n>=2&&m>=2){
		for(int i=0;i<m-1;i++){
			for(int j=0;j<n-1;j++){
				rect_1=getSum(0,0,j,i);
				rect_2=getSum(j+1,0,n-1,i);
				rect_3=getSum(0,i+1,n-1,m-1);
				rect=rect_1*rect_2*rect_3;
				if(rect>result) result=rect;
			}
		}
	}
	//4
	if(n>=2&&m>=2){
		for(int i=0;i<m-1;i++){
			for(int j=0;j<n-1;j++){
				rect_1=getSum(0,i+1,j,m-1);
				rect_2=getSum(j+1,i+1,n-1,m-1);
				rect_3=getSum(0,0,n-1,i);
				rect=rect_1*rect_2*rect_3;
				if(rect>result) result=rect;
			}
		}
	}
	//5
	if(n>=2&&m>=2){
		for(int i=0;i<m-1;i++){
			for(int j=0;j<n-1;j++){
				rect_1=getSum(0,0,j,m-1);
				rect_2=getSum(j+1,0,n-1,i);
				rect_3=getSum(j+1,i+1,n-1,m-1);
				rect=rect_1*rect_2*rect_3;
				if(rect>result) result=rect;
			}
		}
	}
	//6
	if(n>=2&&m>=2){
		for(int i=0;i<m-1;i++){
			for(int j=0;j<n-1;j++){
				rect_1=getSum(0,0,j,i);
				rect_2=getSum(0,i+1,j,m-1);
				rect_3=getSum(j+1,0,n-1,m-1);
				rect=rect_1*rect_2*rect_3;
				if(rect>result) result=rect;
			}
		}
	}
	cout<<result;
	
	return 0;
}
