
/////// time problem -->> list,set,vector problem ///////

#include <iostream>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

set<string> lis;
vector<string> see;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int N,M;
	cin>>N>>M;
	
	for(int i=0;i<N;i++){
		string temp;
		cin>>temp;
		lis.insert(temp);
	}
	for(int i=0;i<M;i++){
		string temp;
		cin>>temp;
		if(lis.find(temp)!=lis.end()){
			see.push_back(temp);
		}
	}
	
	sort(see.begin(),see.end());
	cout<<see.size()<<"\n";
	for(int i=0;i<see.size();i++){
		cout<<see[i]<<"\n";
	}
	
	return 0;
}
