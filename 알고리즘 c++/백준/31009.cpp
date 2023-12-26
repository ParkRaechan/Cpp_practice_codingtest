#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,MM;
	cin>>n;
	for(int i=0;i<n;i++){
		string s; int d;
		cin>>s>>d;
		if(s=="jinju") MM=d;
		v.push_back(d);
	}
	int ddf=0;
	for(int i=0;i<n;i++){
		if(v[i]>MM) ddf++;
	}
	cout<<MM<<"\n"<<ddf;
	
	return 0;
}
