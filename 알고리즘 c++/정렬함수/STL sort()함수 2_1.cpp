#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool compare(pair<string,pair<int,int> >a,
			 pair<string,pair<int,int> >b){
	if(a.second.first==b.second.first){
		return a.second.second>b.second.second;
	}else{
		return a.second.first>b.second.first;
	}
}

int main(void){
	vector<pair<string,pair<int,int> > > v;
	v.push_back(pair<string,pair<int,int> >("가나다",pair<int,int>(90,11111)));
	v.push_back(pair<string,pair<int,int> >("라마바",pair<int,int>(20,22222)));
	v.push_back(pair<string,pair<int,int> >("사아자",pair<int,int>(50,33333)));
	v.push_back(pair<string,pair<int,int> >("차카카",pair<int,int>(50,44444)));
	v.push_back(pair<string,pair<int,int> >("타파하",pair<int,int>(80,55555)));
	sort(v.begin(),v.end(),compare);
	
	for(int i=0;i<v.size();i++){
		cout<<v[i].first<<' ';
	} 
}
