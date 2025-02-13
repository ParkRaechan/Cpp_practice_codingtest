#include <iostream>

using namespace std;
int arr[1000001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b;
	cin>>a>>b;
	for(int i=2;i<=b;i++){
		arr[i]=i;
	}
	for(int i=2;i*i<=b;i++){
		if(arr[i]==0){
			continue;
		}
		for(int j=i*i;j<=b;j+=i){
			arr[j]=0;
		}
	}
	for(int i=a;i<=b;i++){
		if(arr[i]!=0){
			cout<<arr[i]<<"\n";
		}
	}
	
	return 0;
}
