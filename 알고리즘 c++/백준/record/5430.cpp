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
		bool error=false;
		deque<int> arr;
		string cmd,input;
		cin>>cmd>>n>>input;
		string tmp="";
		if(n!=0){
			for(int j=0;j<input.length();j++){
				if(input[j]=='['||input[j]==']'||input[j]==','){
					if(input[j]!='[') arr.push_back(stoi(tmp));
					tmp="";
					continue;
				}
				tmp+=input[j];
			}
		}
		int rever=1;
		for(int j=0;j<cmd.length();j++){
			if(cmd[j]=='R'){
				rever*=-1;
			}else{
				if(arr.size()==0){
					cout<<"error\n";
					error=true;
					break;
				}
				if(rever==1) arr.pop_front();
				else arr.pop_back();
			}
		}
		if(!error){
			cout<<"[";
			if(rever==1){
				while(!arr.empty()){
					if(arr.size()!=1) cout<<arr.front()<<",";
					else cout<<arr.front();
					arr.pop_front();
				}
			}else{
				while(!arr.empty()){
					if(arr.size()!=1) cout<<arr.back()<<",";
					else cout<<arr.back();
					arr.pop_back();
				}
			}
			cout<<"]\n";
		}
	}
	
	return 0;
}
