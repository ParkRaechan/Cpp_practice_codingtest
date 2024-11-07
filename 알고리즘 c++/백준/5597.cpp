#include <iostream>

using namespace std;
int arr[31];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=0;i<28;i++){
		int index; cin>>index;
		arr[index]++;
	}
	for(int i=1;i<=30;i++){
		if(arr[i]!=1){
			cout<<i<<"\n";
		}
	}
	
	return 0;
}
