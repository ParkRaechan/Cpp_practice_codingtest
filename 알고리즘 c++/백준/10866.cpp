#include <iostream>
#include <deque>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	deque<int> deq;
	int n,index; string comd;
	cin>>n;
	while(n>0){
		n--;
		cin>>comd;
		if(comd=="push_front"){
			cin>>index;
			deq.push_front(index);
		}else if(comd=="push_back"){
			cin>>index;
			deq.push_back(index);
		}else if(comd=="pop_front"){
			if(deq.size()<=0){
				cout<<"-1"<<"\n";
			}else{
				cout<<deq.front()<<"\n";
				deq.pop_front();
			}
		}else if(comd=="pop_back"){
			if(deq.size()<=0){
				cout<<"-1"<<"\n";
			}else{
				cout<<deq.back()<<"\n";
				deq.pop_back();
			}
		}else if(comd=="size"){
			cout<<deq.size()<<"\n";
		}else if(comd=="empty"){
			cout<<deq.empty()<<"\n";
		}else if(comd=="front"){
			if(deq.size()<=0){
				cout<<"-1"<<"\n";
			}else{
				cout<<deq.front()<<"\n";
			}
		}else if(comd=="back"){
			if(deq.size()<=0){
				cout<<"-1"<<"\n";
			}else{
				cout<<deq.back()<<"\n";
			}
		}
	}
	
	return 0;
}
