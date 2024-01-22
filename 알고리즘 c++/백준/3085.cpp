#include <iostream>

using namespace std;
char arr[51][51];
int m;
void FindMaxRoW(int n){
	for(int i=0;i<n;i++){
		int count=1;
		for(int j=0;j<n;j++){
			if(arr[i][j]==arr[i][j+1]){
				count++;
			}else{
				if(count>m) m=count;
				count=1;
			}
		}
	}
}
void FindMaxCol(int n){
	for(int i=0;i<n;i++){
		int count=1;
		for(int j=0;j<n;j++){
			if(arr[j][i]==arr[j+1][i]){
				count++;
			}else{
				if(count>m) m=count;
				count=1;
			}
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n-1;j++){
			int index=arr[i][j];
			arr[i][j]=arr[i][j+1];
			arr[i][j+1]=index;
			
			FindMaxCol(n);
			FindMaxRoW(n);
			
			index=arr[i][j];
			arr[i][j]=arr[i][j+1];
			arr[i][j+1]=index;
			
			////////
			
			index=arr[j][i];
			arr[j][i]=arr[j+1][i];
			arr[j+1][i]=index;
			
			FindMaxCol(n);
			FindMaxRoW(n);
			
			index=arr[j][i];
			arr[j][i]=arr[j+1][i];
			arr[j+1][i]=index;
		}
	}
	cout<<m;
	
	return 0;
}
