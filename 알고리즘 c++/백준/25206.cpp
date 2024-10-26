#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double sum=0;
	double g=0;
	for(int i=0;i<20;i++){
		string s; cin>>s;
		double d; cin>>d;
		string s2; cin>>s2;
		double score;
		if(s2=="A+"){
			score=4.5;
		}else if(s2=="A0"){
			score=4.0;
		}else if(s2=="B+"){
			score=3.5;
		}else if(s2=="B0"){
			score=3.0;
		}else if(s2=="C+"){
			score=2.5;
		}else if(s2=="C0"){
			score=2.0;
		}else if(s2=="D+"){
			score=1.5;
		}else if(s2=="D0"){
			score=1.0;
		}else if(s2=="F"){
			score=0;
		}else{
			continue;
		}
		g+=d;
		sum+=d*score;
	}
	cout<<sum/g;
	
	return 0;
}
