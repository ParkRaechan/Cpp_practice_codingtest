#include <iostream>

using namespace std;
int arr[10000001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	for(int i=2;i<=n;i++){
		arr[i]=i;
	}
	for(int i=2;i*i<=n;i++){
		if(arr[i]==0) continue;
		for(int j=i*i;j<=n;j+=i){
			arr[j]=0;
		}
	}
	while(1){
		for(int i=2;i*i<=n;i++){
			if(arr[i]!=0&&n%i==0){
				cout<<i<<"\n";
				n/=i;
				break;
			}
		}
		if(n==1){
			break;
		}
	}
	
	return 0;
}
