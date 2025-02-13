#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int T;
	double G;
	cout<<fixed;
	cout.precision(1);
	
	cin>>T;
	while(T--){
		int N,C,ddex=0;
		double index=0;
		
		cin>>N;
		
		for(int i=0;i<N;i++){
			cin>>C>>G;
			index+=(C*G);
			ddex+=C;
		}
		index/=ddex;
		cout<<ddex<<" "<<index<<"\n";
	}
	
	return 0;
}
