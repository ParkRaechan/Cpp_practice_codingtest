#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
int n,k;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>n>>k;
	for(int i=1;i<=n;i++){
		v.push_back(i);
	}
	int num=k-1;
	cout<<"<";
	for(int i=0;i<n-1;i++){
		cout<<v[num]<<", ";
		v.erase(v.begin()+num);
		num+=k-1;
		if(num>=v.size()) num%=v.size();
	}
	cout<<v[0]<<">";
	
	return 0;
}
