#include <iostream>

using namespace std;
int arr[100001];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,M=0;
	cin>>n;
	for(int i=0;i<n;i++){
		int h;	cin>>h;
		arr[h]++;
		if(M<h) M=h;
	}
	int rn=0;
	if(n%2!=0){
		rn=(n+1)/2;
	}else rn=n/2;
	for(int i=0;i<=M;i++){
		if(arr[i]>rn){
			cout<<"NO";
			return 0;
		}
	}
	cout<<"YES";
	
	return 0;
}
