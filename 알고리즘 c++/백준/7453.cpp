#include <iostream>

using namespace std;
int arr_a[4001],arr_b[4001],arr_c[4001],arr_d[4001];
int n,result=0;
int sumsum[60000000];
void First_Solve(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			sumsum[arr_a[i]+arr_b[j]+10000000]+=1;
		}
	}
	return;
}
void Second_Solve(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			result+=sumsum[10000000-(arr_c[i]+arr_d[j])];
		}
	}
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr_a[i]>>arr_b[i]>>arr_c[i]>>arr_d[i];
	}
	First_Solve();
	Second_Solve();
	cout<<result;
	
	return 0;
}
