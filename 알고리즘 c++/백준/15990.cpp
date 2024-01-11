#include <iostream>

using namespace std;
long long arr[100001][3];
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	arr[1][0]=1;arr[1][1]=0;arr[1][2]=0;
	arr[2][0]=0;arr[2][1]=1;arr[2][2]=0;
	arr[3][0]=1;arr[3][1]=1;arr[3][2]=1;
	for(long long i=4;i<=100000;i++){
		arr[i][0]=(arr[i-1][1]+arr[i-1][2])%1000000009;
		arr[i][1]=(arr[i-2][0]+arr[i-2][2])%1000000009;
		arr[i][2]=(arr[i-3][0]+arr[i-3][1])%1000000009;
	}
	
	long long t;	cin>>t;
	for(int i=0;i<t;i++){
		long long n;	cin>>n;
		cout<<(arr[n][0]+arr[n][1]+arr[n][2])%1000000009<<"\n";
	}
	
	return 0;
}
