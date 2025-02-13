#include <iostream>
using namespace std;
long long N;
int Solve(){
	if(N==0) return 0;
	long long lf=1;
	int index=1;
	while(lf<N){
		lf*=2;
		index++;
		if(lf>=N){
			break;
		}
	}
	return index;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>N;
	cout<<Solve();
	
	return 0;
}
