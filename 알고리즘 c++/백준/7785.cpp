#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
vector<string> v1;
vector<string> v2;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;	cin>>n;
	for(int i=0;i<n;i++){
		string s1,s2;	cin>>s1>>s2;
		if(s2=="enter") v1.push_back(s1);
		else v2.push_back(s1);
	}
	sort(v1.begin(),v1.end(),greater<string>());
	sort(v2.begin(),v2.end(),greater<string>());
	int j=0;
	for(int i=0;i<v1.size();i++){
		if(j>=v2.size()) cout<<v1[i]<<"\n";
		else if(v1[i]!=v2[j]) cout<<v1[i]<<"\n";
		else j++;
	}
	
	return 0;
}
