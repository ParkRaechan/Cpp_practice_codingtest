#include <iostream>

using namespace std;
int arr[123];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	string s; cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]>='a'){
			arr[s[i]-32]++;
		}else arr[s[i]]++;
	}
	int M=0;char M_alp;
	for(int i=0;i<91;i++){
		if(arr[i]>M){
			M=arr[i];
			M_alp=char(i);
		}else if(arr[i]==M){
			M_alp='?';
		}
	}
	cout<<M_alp;
	
	return 0;
}
