#include <iostream>

using namespace std;
int arr[2188][2188];
int result[3],result_index;
bool check(int x,int y,int dic){
	int index=arr[x][y];
	for(int i=x;i<x+dic;i++){
		for(int j=y;j<y+dic;j++){
			if(arr[i][j]!=index){
				return false;
			}
		}
	}
	result_index=index;
	return true;
}
void devide(int x,int y,int dic){
	int dic_1=dic/3;
	if(dic_1==0) return;
	int index_1=1,index_2=1;
	for(int i=x;i<x+dic;i+=dic_1){
		for(int j=y;j<y+dic;j+=dic_1){
			if(check(i,j,dic_1)) result[result_index+1]++;
			else devide(i,j,dic_1);
		}
	}
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			cin>>arr[i][j];
		}
	}
	if(check(0,0,n)){
		result[result_index+1]++;
		for(int i=0;i<3;i++){
			cout<<result[i]<<"\n";
		}
		return 0;
	}
	devide(0,0,n);
	for(int i=0;i<3;i++){
		cout<<result[i]<<"\n";
	}
	
	return 0;
}
