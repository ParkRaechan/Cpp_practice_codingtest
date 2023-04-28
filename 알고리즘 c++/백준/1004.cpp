#include <iostream>
#include <cmath>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;
	cin>>t;
	while(t--){
		int x1,x2,y1,y2,n,number=0;
		cin>>x1>>y1>>x2>>y2;
		cin>>n;
		while(n--){
			int cx,cy,r;
			double dist1,dist2;
			cin>>cx>>cy>>r;
			dist1=sqrt((cx-x1)*(cx-x1)+(cy-y1)*(cy-y1));
			dist2=sqrt((cx-x2)*(cx-x2)+(cy-y2)*(cy-y2));
			if(dist1<r&&dist2>r) number++;
			if(dist2<r&&dist1>r) number++;
		}
		cout<<number<<"\n";
	}
	
	return 0;
}
