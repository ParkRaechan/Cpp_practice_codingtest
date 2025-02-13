#include <iostream>

using namespace std;
int arr[9];
bool Solve1(){
	for(int i=1;i<=8;i++){
		if(arr[i]!=i) return false;
	}
	return true;
}
bool Solve2(){
	for(int i=1;i<=8;i++){
		if(arr[i]!=9-i) return false;
	}
	return true;
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	for(int i=1;i<=8;i++){
		cin>>arr[i];
	}
	if(Solve1()){
		cout<<"ascending";
	}else if(Solve2()){
		cout<<"descending";
	}else{
		cout<<"mixed";
	}
	
	return 0;
}
