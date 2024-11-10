#include <iostream>

using namespace std;
int arr[43];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=0;i<10;i++){
		int index; cin>>index;
		int index2=index%42;
		arr[index2]++;
	}
	int result=0;
	for(int i=0;i<42;i++){
		if(arr[i]!=0) result++;
	}
	cout<<result;
	
	return 0; 
}
