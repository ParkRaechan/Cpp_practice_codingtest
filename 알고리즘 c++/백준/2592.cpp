#include <iostream>

using namespace std;
int arr[1001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int sum=0;
	for(int i=0;i<10;i++){
		int index;cin>>index;
		sum+=index;
		arr[index]++;
	}
	int M=0;
	for(int i=10;i<1000;i+=10){
		if(arr[i]>arr[M]) M=i;
	}
	cout<<sum/10<<"\n"<<M;
	
	return 0;
}
