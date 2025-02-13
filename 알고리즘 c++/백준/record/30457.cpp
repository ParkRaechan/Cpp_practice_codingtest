#include <iostream>

using namespace std;
int N;
int arr[1001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>N;
	int M=0;
	for(int i=0;i<N;i++){
		int index; cin>>index;
		arr[index]++;
		if(index>M) M=index;
	}
	int temp=0;
	for(int i=1;i<=M;i++){
		if(arr[i]>0){
			temp++; arr[i]--;
		}
	}
	for(int i=1;i<=M;i++){
		if(arr[i]>0){
			temp++;
		}
	}
	cout<<temp;
	
	return 0;
}
