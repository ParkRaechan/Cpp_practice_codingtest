#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<int> v;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string a;	cin>>a;
	for(int i=0;i<a.length();i++){
		int index=a[i]-'0';
		v.push_back(index);
	}
	sort(v.begin(),v.end());
	while(!v.empty()){
		cout<<v.back();
		v.pop_back();
	}
	
	return 0;
}
