#include <iostream>
#include <deque>
using namespace std;
int arr[1000001];
deque<int> d;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int j=1;
	for(int i=n-1;i>=0;i--){
		if(arr[i]==1){
			d.push_front(j);
			j++;
		}else if(arr[i]==2){
			int aad=d[0];
			d.pop_front();
			d.push_front(j);
			d.push_front(aad);
			j++;
		}else{
			d.push_back(j);
			j++;
		}
	}
	for(int i=0;i<n;i++){
		cout<<d[i]<<" ";
	}
	
	return 0;
}
