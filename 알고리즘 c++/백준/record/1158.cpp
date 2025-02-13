#include <iostream>
#include <queue>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	queue<int> quu; queue<int> quu_result;
	int n,k;
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		quu.push(i);
	}
	int q_index=k;
	while(!quu.empty()){
		if(q_index==1){
			quu_result.push(quu.front());
			quu.pop();
			q_index=k;
		}else{
			quu.push(quu.front());
			quu.pop();
			q_index--;
		}
	}
	cout<<"<";
	while(!quu_result.empty()){
		cout<<quu_result.front();
		quu_result.pop();
		if(quu_result.empty()){
			cout<<">";
		}else{
			cout<<", ";
		}
	}
	
	return 0;
}
