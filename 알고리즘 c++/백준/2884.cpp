#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int h,m; cin>>h>>m;
	if(m<45){
		if(h==0){
			h=23;
		}else{
			h-=1;
		}
		m=60-(45-m);
	}else{
		m-=45;
	}
	cout<<h<<" "<<m;
	
	return 0;
}
