#include <iostream>

using namespace std;

int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int s,m,l,xl,xxl,xxxl; cin>>s>>m>>l>>xl>>xxl>>xxxl;
	int t,p; cin>>t>>p;
	//s
	int index_s_1=s/t,index_s_2=s%t;
	if(index_s_2!=0) index_s_1++;
	//m
	int index_m_1=m/t,index_m_2=m%t;
	if(index_m_2!=0) index_m_1++;
	//l
	int index_l_1=l/t,index_l_2=l%t;
	if(index_l_2!=0) index_l_1++;
	//xl
	int index_xl_1=xl/t,index_xl_2=xl%t;
	if(index_xl_2!=0) index_xl_1++;
	//xxl
	int index_xxl_1=xxl/t,index_xxl_2=xxl%t;
	if(index_xxl_2!=0) index_xxl_1++;
	//xxxl
	int index_xxxl_1=xxxl/t,index_xxxl_2=xxxl%t;
	if(index_xxxl_2!=0) index_xxxl_1++;
	//result1
	int sum=index_l_1+index_m_1+index_s_1+index_xl_1+index_xxl_1+index_xxxl_1;
	//result2
	int pen_1=n/p,pen_2=n%p;
	
	cout<<sum<<"\n"<<pen_1<<" "<<pen_2;
	
	return 0;
}
