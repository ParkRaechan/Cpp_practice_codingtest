#include <iostream>
#include <algorithm>
using namespace std;

int array[1000001];

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int a;
	cin>>a;
	for(int i=0;i<a;i++){
		cin>>array[i];
	}
	sort(array,array+a);
	cout<<array[0]<<" "<<array[a-1];
	
	return 0;
}
