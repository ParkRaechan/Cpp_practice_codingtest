#include <iostream>

using namespace std;
int Factor(int n){
	int result=1;
	for(int i=1;i<=n;i++){
		result*=i;
	}
	return result;
}
int Combine(int n,int r){
	int result1=Factor(n)/Factor(r);
	int result2=result1/Factor(n-r);
	return result2;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,M,K;
	cin>>N>>M>>K;
	int result1=0;
	for(int i=K;i<=M;i++){
		result1+=Combine(M,i)*Combine(N-M,M-i);
	}
	
	int result2=Combine(N,M);
	double result=double(result1)/double(result2);
	cout.precision(10);
	cout<<result;
	
	return 0;
}
