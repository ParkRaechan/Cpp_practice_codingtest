#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int s_ab; cin>>s_ab;
	
	
	int m_a,F_ab,m_b; cin>>m_a>>F_ab>>m_b;
	int ab=m_a+F_ab+m_b;
	if(s_ab<=240||s_ab<=ab){
		cout<<"high speed rail";
	}else{
		cout<<"flight";
	}
	
	return 0;
}
