#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n;
	cin>>n;
	int count=0;
	int max=0;
	vector<long long> v(n);
	for(int i=0;i<n;i++){
		cin>>v[i];
	}
	sort(v.begin(),v.end());
	long long result=v[0];
	for(int i=1;i<n;i++){
		if(v[i]==v[i-1]){
			count++;
			if(max<count){
				max=count;
				result=v[i];
			}
		}else{
			count=0;
		}
	}
	cout<<result;
	
	return 0;
}
