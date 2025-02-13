#include <iostream>
#include <queue>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	queue<int> quu;
	int n,index; string comd;
	cin>>n;
	while(n>0){
		n--;
		cin>>comd;
		if(comd=="push"){
			cin>>index;
			quu.push(index);
		}else if(comd=="pop"){
			if(quu.size()<=0){
				cout<<"-1"<<"\n";
			}else{
				cout<<quu.front()<<"\n";
				quu.pop();
			}
		}else if(comd=="size"){
			cout<<quu.size()<<"\n";
		}else if(comd=="empty"){
			cout<<quu.empty()<<"\n";
		}else if(comd=="front"){
			if(quu.size()<=0){
				cout<<"-1"<<"\n";
			}else {
				cout<<quu.front()<<"\n";
			}
		}else if(comd=="back"){
			if(quu.size()<=0){
				cout<<"-1"<<"\n";
			}else {
				cout<<quu.back()<<"\n";
			}
		}
	}
	
	return 0;
}
