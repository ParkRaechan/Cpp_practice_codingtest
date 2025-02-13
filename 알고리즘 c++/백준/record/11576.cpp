#include <iostream>
#include <stack>
#include <cmath>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a,b,t,n,sum=0;
	cin>>a>>b>>t;
	for(int i=0;i<t;i++){
		cin>>n;
		sum+=(n*(int)pow(a,t-i-1));
	}
	stack<int> stk;
	while(1){
		int index=sum%b;
		stk.push(index);
		if(sum<b) break;
		sum/=b;
	}
	while(!stk.empty()){
		cout<<stk.top()<<" ";
		stk.pop();
	}
	
	return 0;
}
