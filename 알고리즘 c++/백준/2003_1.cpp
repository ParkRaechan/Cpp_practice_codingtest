#include <iostream>
using namespace std;
int arr[10001];
int n,m,result_cnt=0;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int index;
	for(int i=0;i<n;i++){
		index=0;
		for(int j=i;j<n;j++){
			index+=arr[j];
			if(index==m){
				result_cnt++;
				break;
			}
		}
		
	}
	cout<<result_cnt;
	
	return 0;
}
