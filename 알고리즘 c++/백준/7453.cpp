#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long arr[4001][4];
long long n,result=0;
vector<long long> v1;
vector<long long> v2;
void First_Solve(){
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			v1.push_back(arr[i][0]+arr[j][1]);
			v2.push_back(arr[i][2]+arr[j][3]);
		}
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end());
	
	return;
}
void Second_Solve(){
	for(int i=0;i<v1.size();i++){
		int a=lower_bound(v2.begin(),v2.end(),-v1[i])-v2.begin();
		int b=upper_bound(v2.begin(),v2.end(),-v1[i])-v2.begin();
		result+=b-a;
	}
	
	return;
}
void Solve(){
	First_Solve();
	Second_Solve();
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>arr[i][0]>>arr[i][1]>>arr[i][2]>>arr[i][3];
	}
	Solve();
	cout<<result;
	
	return 0;
}
