#include <iostream>

using namespace std;
int arr_m[10];
int arr_p[10];
int arr_s[10];
int arr_z[8];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	int result=0;
	for(int i=1;i<=n;i++){
		string s; cin>>s;
		if(s[1]=='m'){
			int index=s[0]-'0';
			arr_m[index]++;
			if(arr_m[index]>4){
				if(result==0) result=i;
			}
		}else if(s[1]=='p'){
			int index=s[0]-'0';
			arr_p[index]++;
			if(arr_p[index]>4){
				if(result==0) result=i;
			}
		}else if(s[1]=='s'){
			int index=s[0]-'0';
			arr_s[index]++;
			if(arr_s[index]>4){
				if(result==0) result=i;
			}
		}else if(s[1]=='z'){
			int index=s[0]-'0';
			arr_z[index]++;
			if(arr_z[index]>4){
				if(result==0) result=i;
			}
		}
	}
	cout<<result;
	
	return 0;
}
