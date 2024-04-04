#include <iostream>

using namespace std;
bool arr[10050];
void Solve(int d){
	int sum=d,m=d,index=10000;
	
	while(index>0){
		sum+=m/index;
		m%=index;
		index/=10;
	}
	arr[sum]=true;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=1;i<10000;i++){
		Solve(i);
	}
	for(int i=1;i<10000;i++){
		if(!arr[i]) cout<<i<<"\n";
	}
	
	return 0;
}
