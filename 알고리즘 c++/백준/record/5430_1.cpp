#include <iostream>
#include <algorithm>
#include <string>
#include <deque>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,t;
	cin>>t;
	while(t--){
		string order,arr;
		bool rever=false,error=false;
		deque<int> dq;
		cin>>order>>n>>arr;
		string s="";
		for(int i=0;i<arr.length();i++){
			if(isdigit(arr[i])){
				s+=arr[i];
			}
			else{
				if(!s.empty()){
					dq.push_back(stoi(s));
					s="";
				}
			}
		}
		for(auto o : order){
			if(o=='R'){
				if(rever) rever=false;
				else rever=true;
			}else{
				if(dq.empty()){
					cout<<"error"<<"\n";
					error=true;
					break;
				}
				if(rever) dq.pop_back();
				else dq.pop_front();
			}
		}
		if(!error) cout<<'[';
		if(rever&&!dq.empty()){
			for(auto o=dq.rbegin();o!=dq.rend();o++){
				if(o==dq.rend()-1) cout<<*o;
				else cout<<*o<<',';
			}
		}else if(!rever&&!dq.empty()){
			for(auto o=dq.begin();o!=dq.end();o++){
				if(o==dq.end()-1) cout<<*o;
				else cout<<*o<<',';
			}
		}
		if(!error) cout<<"]\n";
	}
	
	return 0;
}
