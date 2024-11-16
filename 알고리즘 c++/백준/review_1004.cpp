#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		int x1,y1,x2,y2; cin>>x1>>y1>>x2>>y2;
		int index; cin>>index;
		int result=0;
		for(int i=0;i<index;i++){
			int cx,cy,r; cin>>cx>>cy>>r;
			int dist1=(cx-x1)*(cx-x1)+(cy-y1)*(cy-y1);
			int dist2=(cx-x2)*(cx-x2)+(cy-y2)*(cy-y2);
			int rr=r*r;
			if(dist1>rr&&dist2>rr){
				continue;
			}else if(dist1<rr&&dist2<rr){
				continue;
			}else{
				result++;
			}
		}
		cout<<result<<"\n";
	}
	
	return 0;
}
