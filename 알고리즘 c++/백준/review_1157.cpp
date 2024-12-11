#include <iostream>

using namespace std;
int arr[100];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	
	string s; cin>>s;
	for(int i=0;i<s.length();i++){
		if(s[i]>='a'&&s[i]<='z'){
			arr[s[i]-32]++;
		}else{
			arr[s[i]]++;
		}
	}
	int max=0; bool result=false; int index;
	for(int i=65;i<=90;i++){
		if(arr[i]>max){
			index=i;
			result=true;
			max=arr[i];
		}else if(arr[i]==max){
			result=false;
		}
	}
	if(result==true){
		char c_result=index;
		cout<<c_result;
	}else{
		cout<<"?";
	}
	
	
	return 0;
}
