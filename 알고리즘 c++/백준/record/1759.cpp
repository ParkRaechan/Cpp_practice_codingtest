#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
vector<char> v;
vector<char> result;
int l,c;
bool check(){
	int m=0;
	for(int i=0;i<l;i++){
		if(result[i]=='a'||
		result[i]=='e'||
		result[i]=='i'||
		result[i]=='o'||
		result[i]=='u') m++;
	}
	if(m>=1&&l-m>=2) return true;
	return false;
}
void Solve(int d){
	if(result.size()==l){
		if(check()){
			for(int i=0;i<l;i++){
				cout<<result[i];
			}
			cout<<"\n";
		}
		return;
	}
	for(int i=d;i<c;i++){
		result.push_back(v[i]);
		Solve(i+1);
		result.pop_back();
	}
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>l>>c;
	for(int i=0;i<c;i++){
		char ch;
		cin>>ch;
		v.push_back(ch);
	}
	sort(v.begin(),v.end());
	Solve(0);
	
	return 0;
}
