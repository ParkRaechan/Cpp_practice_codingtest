#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector <char> v;
vector <char> storage;
int l,c;
void Solve(int loca){
	int sz=storage.size();
	
	if(sz>l) return;
	if(loca>c) return;
	if(sz==l){
		int m_sum=0;
		for(int i=0;i<sz;i++){
			if(storage[i]=='a'||storage[i]=='e'||storage[i]=='i'
			||storage[i]=='o'||storage[i]=='u'){
				m_sum++;
			}
		}
		if(m_sum>=1&&(sz-m_sum)>=2){
			for(int i=0;i<sz;i++){
				cout<<storage[i];
			}
			cout<<"\n";
		}
		return;
	}
	
	for(int i=loca;i<c;i++){
		storage.push_back(v[i]);
		Solve(i+1);
		storage.pop_back();
	}
	
	return;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>l>>c;
	for(int i=0;i<c;i++){
		char index; cin>>index;
		v.push_back(index);
	}
	sort(v.begin(),v.end());
	Solve(0);
	
	return 0;
}
