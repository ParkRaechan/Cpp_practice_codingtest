#include <iostream>
#include <algorithm>
using namespace std;
int arr[9];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=0;i<9;i++){
		int index;	cin>>index;
		arr[i]=index;
	}
	sort(arr,arr+9);	int index_1,index_2;
	bool result=false;
	for(int i=1;i<9;i++){
		if(result==true) break;
		for(int j=0;j<i;j++){
			int sum=0;
			for(int k=0;k<9;k++){
				if(k!=i&&k!=j){
					sum+=arr[k];
				}
			}
			if(sum==100){
				index_1=i;index_2=j;
				result=true; break;
			}
		}
	}
	for(int i=0;i<9;i++){
		if(i!=index_1&&i!=index_2) cout<<arr[i]<<"\n";
	}
	
	
	return 0;
}
