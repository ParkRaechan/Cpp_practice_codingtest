#include <iostream>
#include <cmath>
#include <algorithm>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t;	cin>>t;
	while(t--){
		int x1,y1,x2,y2,x3,y3,x4,y4;
		cin>>x1>>y1;
		cin>>x2>>y2;
		cin>>x3>>y3;
		cin>>x4>>y4;
		long long dist[6];
		dist[0]=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
		dist[1]=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
		dist[2]=(x1-x4)*(x1-x4)+(y1-y4)*(y1-y4);
		dist[3]=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
		dist[4]=(x2-x4)*(x2-x4)+(y2-y4)*(y2-y4);
		dist[5]=(x3-x4)*(x3-x4)+(y3-y4)*(y3-y4);
		sort(dist,dist+6);
		if(dist[0]==dist[1]&&dist[1]==dist[2]&&dist[2]==dist[3]&&dist[4]==dist[5]) cout<<"1\n";
		else cout<<"0\n";
	}
	
	return 0;
}
