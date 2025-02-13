#include <iostream>
#include <map>
using namespace std;
map<string,int> m;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int M=0;string ss;
	for(int i=0;i<n;i++){
		string s; cin>>s;
		m[s]++;
		if(m[s]>M){
			M=m[s]; ss=s;
		}else if(m[s]==M){
			if(s<ss){
				M=m[s]; ss=s;
			}
		}
	}
	cout<<ss;
	
	return 0;
}
