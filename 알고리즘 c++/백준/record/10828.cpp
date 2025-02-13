#include <iostream>
#include <stack>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	stack<int> s;
	int n,num,result=0;
	string comd;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>comd;
		if(comd=="push"){
			cin>>num;
			s.push(num);
		}else if(comd=="pop"){
			if(s.size()==0){
				cout<<"-1\n";
			}else{
				cout<<s.top()<<"\n";
				s.pop();
			}
		}else if(comd=="size"){
			cout<<s.size()<<"\n";
		}else if(comd=="empty"){
			cout<<s.empty()<<"\n";
		}else if(comd=="top"){
			if(s.size()==0){
				cout<<"-1\n";
			}else{
				cout<<s.top()<<"\n";
			}
		}
	}
	
	return 0;
}
