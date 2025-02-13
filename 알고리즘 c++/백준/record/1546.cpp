#include <iostream>

using namespace std;
int arr[1001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	double M=0;
	double sum=0;
	for(int i=0;i<n;i++){
		cin>>arr[i];
		if(arr[i]>M){
			M=arr[i];
		}
	}
	for(int i=0;i<n;i++){
		double a=arr[i]/M*100;
		sum+=a;
	}
	cout<<sum/n;
	
	return 0;
}
