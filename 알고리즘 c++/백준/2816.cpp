#include <iostream>

using namespace std;
string arr[101];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		if(arr[i]=="KBS1"){
			for(int j=i;j>0;j--){
				string str=arr[j];
				arr[j]=arr[j-1];
				arr[j-1]=str;
				cout<<"4";
			}
			break;
		}
		cout<<"1";
	}
	
	for(int i=0;i<n;i++){
		if(arr[i]=="KBS2"){
			for(int j=0;j<i-1;j++){
				cout<<"4";
			}
			break;
		}
		cout<<"1";
	}
	
	
	return 0;
}
