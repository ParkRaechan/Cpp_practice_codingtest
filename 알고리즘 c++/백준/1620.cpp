#include <iostream>
#include <algorithm>
#include <map>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,m;	cin>>n>>m;
	map<string,string> mp;
	for(int i=0;i<n;i++){
		string index,input;cin>>input;
		index=to_string(i+1);
		mp[input]=index;mp[index]=input;
	}
	for(int i=0;i<m;i++){
		string input;cin>>input;
		cout<<mp[input]<<"\n";
	}
	
	return 0;
}
