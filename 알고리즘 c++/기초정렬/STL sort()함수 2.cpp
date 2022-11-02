#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	vector<pair<int,string> > v;
	v.push_back(pair<int,string>(80,"가나다"));
	v.push_back(pair<int,string>(90,"라마바"));
	v.push_back(pair<int,string>(60,"사아자"));
	v.push_back(pair<int,string>(70,"차카카"));
	v.push_back(pair<int,string>(30,"타파하"));
	
	sort(v.begin(),v.end());
	
	for(int i=0;i<v.size();i++){
		cout<<v[i].second<<' ';
	} 
}
