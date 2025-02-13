#include <iostream>

using namespace std;
bool arr[100001];
bool arr_1[100001];
int n;
bool result=false;int sst=9999999;
void swch(int f){
	if(arr[f]==1) arr[f]=0;
	else arr[f]=1;
		
	return;
}
void Solve(int d,int stk){
	if(d==0){
		Solve(d+1,stk);
		
		swch(0);
		swch(1);
		Solve(d+1,stk+1);
		
		swch(0);
		swch(1);
	}else if(d==n-1){
		int d_2=d-1;
		if(arr[d_2]!=arr_1[d_2]){
			swch(d_2);swch(d_2+1);stk+=1;
			if(arr[d]==arr_1[d]){
				result=true;
				if(sst>stk) sst=stk;
			}swch(d_2);swch(d_2+1);
			return;
		}else{
			if(arr[d]==arr_1[d]){
				result=true;
				if(sst>stk) sst=stk;
			}
			return;
		}
	}else{
		int d_1=d-1;
		if(arr[d_1]==arr_1[d_1]){
			Solve(d+1,stk);
		}else{
			swch(d_1);swch(d_1+1);swch(d_1+2);
			Solve(d+1,stk+1);
			swch(d_1);swch(d_1+1);swch(d_1+2);
		}
	}
	
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for(int i=0;i<n;i++){
		char ch;	cin>>ch;
		arr[i]=ch-'0';
	}
	for(int i=0;i<n;i++){
		char ch;	cin>>ch;
		arr_1[i]=ch-'0';
	}
	Solve(0,0);
	if(result) cout<<sst;
	else cout<<"-1";
	
	return 0;
}
