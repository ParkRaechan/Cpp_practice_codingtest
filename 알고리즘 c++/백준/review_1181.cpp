#include <iostream>
#include <algorithm>
using namespace std;
string arr[20001];
bool compare(string s1,string s2){
	if(s1.length()==s2.length()) return s1<s2;
	else return s1.length()<s2.length();
}
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	sort(arr,arr+n,compare);
	arr[n]=" ";
	for(int i=0;i<n;i++){
		if(arr[i]==arr[i+1]) continue;
		cout<<arr[i]<<"\n";
	}
	
	return 0;
}
