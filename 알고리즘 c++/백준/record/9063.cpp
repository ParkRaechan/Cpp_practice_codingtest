#include <iostream>

using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	int x,y,M_x=-10001,M_y=-10001,m_x=10001,m_y=10001;
	while(n--){
		cin>>x>>y;
		if(x>M_x) M_x=x;
		if(x<m_x) m_x=x;
		if(y>M_y) M_y=y;
		if(y<m_y) m_y=y;
	}
	cout<<(M_x-m_x)*(M_y-m_y);
	
	return 0;
}
