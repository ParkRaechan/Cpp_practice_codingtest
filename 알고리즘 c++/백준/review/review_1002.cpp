#include <iostream>
#include <cmath>
using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		int x1,y1,r1,x2,y2,r2;
		cin>>x1>>y1>>r1>>x2>>y2>>r2;
		if(x1==x2&&y1==y2){
			if(r1==r2){
				cout<<"-1\n";
			}else{
				cout<<"0\n";
			}
		}else{
			long long range1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);//distance
			long long range2=(r1+r2)*(r1+r2);				//radious sum
			if(range1>range2){
				cout<<"0\n";
			}else if(range1==range2){
				cout<<"1\n";
			}else if(range1<range2){
				double range3=sqrt(range1);
				if((range3+r1)==r2){
					cout<<"1\n";
				}else if((range3+r2)==r1){
					cout<<"1\n";
				}else if((range3+r1)<r2){
					cout<<"0\n";
				}else if((range3+r2)<r1){
					cout<<"0\n";
				}else{
					cout<<"2\n";
				}
			}
		}
	}
	
	return 0;
}
