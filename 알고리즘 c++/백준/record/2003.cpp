#include <iostream>

using namespace std;
int arr[10001];
int n,m,result_cnt=0;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>m;
	arr[0]=0;
	cin>>arr[1];
	for(int i=2;i<=n;i++){
		int index;	cin>>index;
		arr[i]=arr[i-1]+index;
	}
	
	int a=1,b=1;
	while(b<=n){
		int index=arr[b]-arr[a-1];
		
		if(index==m) result_cnt++;
		
		if(index<m) b++;
		else if(index>=m) a++;
	}
	cout<<result_cnt;
	
	return 0;
}
