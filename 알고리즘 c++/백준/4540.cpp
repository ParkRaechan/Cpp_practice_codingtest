#include <iostream>
#include <queue>
#include <vector>
using namespace std;
queue<string> q;
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int t; cin>>t;
	while(t--){
		vector<string> v1;
		vector<string> v2;
		int index1,index2; cin>>index1>>index2;
		
		///////pase1
		for(int i=0;i<index1;i++){
			string index; cin>>index;
			v1.push_back(index);
			v2.push_back("");
		}
		for(int i=0;i<index2;i++){
			int index3,index4; cin>>index3>>index4;
			string s1=v1[index3-1];
			v2[index4-1]=s1;
			v1[index3-1]="";
		}
		
		///////pase2
		for(int i=0;i<index1;i++){
			if(v1[i]!=""){
				q.push(v1[i]);
			}else{
				continue;
			}
		}
		for(int i=0;i<index1;i++){
			if(v2[i]==""){
				v2[i]=q.front();
				q.pop();
			}else{
				continue;
			}
		}
		for(int i=0;i<index1;i++){
			cout<<v2[i]<<" ";
		}
		cout<<"\n";
		
		while(!v1.empty()) v1.pop_back();
		while(!v2.empty()) v2.pop_back();
	}
	
	return 0;
}
