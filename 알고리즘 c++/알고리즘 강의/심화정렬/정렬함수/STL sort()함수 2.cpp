#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(void){
	vector<pair<int,string> > v;
	v.push_back(pair<int,string>(80,"������"));
	v.push_back(pair<int,string>(90,"�󸶹�"));
	v.push_back(pair<int,string>(60,"�����"));
	v.push_back(pair<int,string>(70,"��īī"));
	v.push_back(pair<int,string>(30,"Ÿ����"));
	
	sort(v.begin(),v.end());
	
	for(int i=0;i<v.size();i++){
		cout<<v[i].second<<' ';
	} 
}
