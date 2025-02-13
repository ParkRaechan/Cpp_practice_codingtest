#include <iostream>
#include <queue>
using namespace std;
bool arr[11];
queue<int> q;
bool arr_rr[1000000];
int Solve(int n){
	
	q.push(n);
	arr_rr[n]=true;
	while(!q.empty()){
		int index=q.front(); q.pop();
		string s=to_string(index);
		for(int i=0;i<s.length();i++){
			int d=s[i]-'0';
			if(arr[d]){
				if(index-1>=0){
					if(!arr_rr[index-1]){
						q.push(index-1);
						arr_rr[index-1]=true;
					}
				}
				if(index+1<=999999){
					if(!arr_rr[index+1]){
						q.push(index+1);
						arr_rr[index+1]=true;
					}
				}
				
				break;
			}
			if(i==s.length()-1){
				int ff;
				if(index>=n) ff=index-n;
				else if(index<n) ff=n-index;
				int result=s.length()+ff;
				return result;
			}
		}
	}
	return 0;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int m; cin>>m;
	for(int i=0;i<m;i++){
		int index; cin>>index; arr[index]=true;
	}
	if(n==100){
		cout<<"0";
	}else if(n>100){
		if(m==10){
			cout<<n-100;
			return 0;
		}
		cout<<min(n-100,Solve(n));
	}else if(n<100){
		if(m==10){
			cout<<100-n;
			return 0;
		}
		cout<<min(100-n,Solve(n));
	}
	
	return 0;
}
