#include <iostream>

using namespace std;
bool arr1[51][51];
bool arr2[51][51];
int n,m;
bool Solve(int x,int y){
	if(x+3>n||y+3>m){
		return false;
	}
	for(int i=x;i<x+3;i++){
		for(int j=y;j<y+3;j++){
			if(arr1[i][j]) arr1[i][j]=false;
			else arr1[i][j]=true;
		}
	}
	return true;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	char c;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>c;
			arr1[i][j]=c-'0';
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			cin>>c;
			arr2[i][j]=c-'0';
		}
	}
	int result=0;
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arr1[i][j]!=arr2[i][j]){
				if(Solve(i,j)) result++;
				else{
					cout<<"-1";
					return 0;
				}
			}
		}
	}
	cout<<result;
	
	return 0;
}
