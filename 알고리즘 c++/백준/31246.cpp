#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k,m=0;	cin>>n>>k;
	for(int i=0;i<n;i++){
		int a,b;	cin>>a>>b;
		if(a>=b) m++;
		else{
			v.push_back(b-a);
		}
	}
	sort(v.begin(),v.end());
	if(m>=k) cout<<"0";
	else{
		cout<<v[k-m-1];
	}
	
	return 0;
}
