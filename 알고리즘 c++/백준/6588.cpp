#include <iostream>

using namespace std;
int arr[1000001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=2;i<=1000000;i++){
		arr[i]=i;
	}
	for(int i=2;i*i<=1000000;i++){
		if(arr[i]==0){
			continue;
		}
		for(int j=i*i;j<=1000000;j+=i){
			arr[j]=0;
		}
	}
	while(1){
		int n;
		cin>>n;
		if(n==0) break;
		for(int i=2;i<=1000000;i++){
			if(arr[i]!=0&&arr[(n-arr[i])]!=0){
				cout<<n<<" = "<<arr[i]<<" + "<<arr[(n-arr[i])]<<"\n";
				break;
			}
			if(i==1000000) cout<<"Goldbach's conjecture is wrong.\n";
		}
	}
	
	return 0;
}
