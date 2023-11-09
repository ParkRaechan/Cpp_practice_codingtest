#include <iostream>

using namespace std;
int n,result=0;
int arr_t[16];
int arr_p[16];
int arr[16];
void Solve(int d,int sum){
	if(d>n) return;
	if(result<sum) result=sum;
	for(int i=d+1;i<=n;i++){
		int index=i+arr_t[i]-1;
		if(index<=n){
			if(arr[index]<sum+arr_p[i]){
				arr[index]=sum+arr_p[i];
				Solve(index,arr[index]);
			}
		}
	}
	
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>arr_t[i]>>arr_p[i];
	}
	Solve(0,0);
	cout<<result;
	
	return 0;
}
