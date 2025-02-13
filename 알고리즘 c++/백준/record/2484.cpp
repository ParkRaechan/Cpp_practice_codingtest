#include <iostream>

using namespace std;
int arr[5];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;cin>>n;
	int M=0;
	for(int i=0;i<n;i++){
		int index_1,index_2,index_3,index_4;
		cin>>index_1>>index_2>>index_3>>index_4;
		int sum=0;
		if(index_1==index_2&&index_2==index_3&&index_3==index_4){
			sum=50000+(index_1*5000);
		}else if(index_1==index_2&&index_2==index_3){
			sum=10000+(index_1*1000);
		}else if(index_1==index_2&&index_2==index_4){
			sum=10000+(index_1*1000);
		}else if(index_1==index_3&&index_3==index_4){
			sum=10000+(index_1*1000);
		}else if(index_2==index_3&&index_3==index_4){
			sum=10000+(index_2*1000);
		}else if(index_1==index_2&&index_3==index_4){
			sum=2000+(index_1*500)+(index_3*500);
		}else if(index_1==index_3&&index_2==index_4){
			sum=2000+(index_1*500)+(index_2*500);
		}else if(index_1==index_4&&index_2==index_3){
			sum=2000+(index_1*500)+(index_2*500);
		}else if(index_1==index_2){
			sum=1000+(index_1*100);
		}else if(index_1==index_3){
			sum=1000+(index_1*100);
		}else if(index_1==index_4){
			sum=1000+(index_1*100);
		}else if(index_2==index_3){
			sum=1000+(index_2*100);
		}else if(index_2==index_4){
			sum=1000+(index_2*100);
		}else if(index_3==index_4){
			sum=1000+(index_3*100);
		}else{
			arr[0]=index_1;arr[1]=index_2;arr[2]=index_3;arr[3]=index_4;
			int d=0;
			for(int g=0;g<4;g++){
				if(arr[g]>d) d=arr[g];
			}
			sum=d*100;
		}
		
		if(sum>M) M=sum;
	}
	cout<<M;
	
	return 0;
}
