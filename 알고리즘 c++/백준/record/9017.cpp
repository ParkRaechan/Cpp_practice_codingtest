#include <iostream>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		//intro
		int regular[1001];
		int number[201];
		int scored[201];
		int overpeople[201];
		int five[201];
		
		for(int i=0;i<=200;i++){
			regular[i]=0;
			number[i]=0;
			scored[i]=0;
			overpeople[i]=0;
			five[i]=0;
		}
		
		
		//input
		int n; cin>>n;
		int M=0;
		for(int i=1;i<=n;i++){
			int index; cin>>index;
			regular[i]=index;
			number[index]++;
			if(index>M) M=index;
		}
		
		
		//qualification
		int score=1;
		for(int i=1;i<=n;i++){
			int index=regular[i];
			if(number[index]==6){
				if(overpeople[index]==4){
					five[index]=score;
					score++;
					overpeople[index]++;
					continue;
				}else if(overpeople[index]==5){
					score++;
					continue;
				}
				scored[index]+=score;
				score++;
				overpeople[index]++;
			}else{
				scored[index]=9999999;
			}
		}
		
		
		//score calculate
		int MM=999999,win=0;
		for(int i=1;i<=M;i++){
			if(scored[i]<MM){
				MM=scored[i]; win=i;
			}else if(scored[i]==MM){
				if(five[i]<five[win]){
					MM=scored[i]; win=i;
				}
			}
		}
		
		
		//result
		cout<<win<<"\n";
	}
	
	return 0;
}
