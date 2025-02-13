#include <iostream>
using namespace std;
int n,s;
long long result=0;
int arr[41];
int sumsum[7000000];
void Left_Solve(int d,int sum){
	if(d==n/2){
		sumsum[sum+3000000]+=1;
		return;
	}
	Left_Solve(d+1,sum);
	Left_Solve(d+1,sum+arr[d]);
}
void Right_Solve(int d_2,int sum_2){
	if(d_2==n){
		result+=sumsum[s-sum_2+3000000];
		return;
	}
	Right_Solve(d_2+1,sum_2);
	Right_Solve(d_2+1,sum_2+arr[d_2]);
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>s;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	Left_Solve(0,0);
	Right_Solve(n/2,0);
	if(s==0) cout<<result-1;
	else cout<<result;
	
	return 0;
}
