#include <iostream>

using namespace std;
int arr[100001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,d=0,f=0;	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr[i];
		if(i==arr[i]) d++;
		else f++;
	}
	if(d==0){
		cout<<"0\n";
	}else{
		if(f==0){
			for(int i=1;i<n;i++){
				arr[i]=i+1;
			}
			arr[n]=1;
		}
		for(int i=1;i<n;i++){
			if(i==arr[i]){
				arr[i]=i+1;
			}
		}
		if(arr[n]==n) arr[n]=1;
		cout<<d<<"\n";
	}
	for(int i=1;i<=n;i++){
		cout<<arr[i]<<" ";
	}
	
	return 0;
}
