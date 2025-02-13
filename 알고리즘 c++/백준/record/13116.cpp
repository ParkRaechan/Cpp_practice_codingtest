#include <iostream>
#include <vector>
using namespace std;
vector<int> v1;
vector<int> v2;
int Solve(int d){
	if(d%2==1){
		return (d-1)/2;
	}else{
		return d/2;
	}
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		int a,b; cin>>a>>b;
		v1.push_back(a);
		while(a>1){
			a=Solve(a);
			v1.push_back(a);
		}
		v2.push_back(b);
		while(b>1){
			b=Solve(b);
			v2.push_back(b);
		}
		int M=0;
		for(int i=0;i<v1.size();i++){
			for(int j=0;j<v2.size();j++){
				if(v1[i]==v2[j]){
					M=v1[i];i=v1.size();j=v2.size();
				}
			}
		}
		cout<<M*10<<"\n";
		while(v1.size()!=0) v1.pop_back();
		while(v2.size()!=0) v2.pop_back();
	}
	
	
	return 0;
}
