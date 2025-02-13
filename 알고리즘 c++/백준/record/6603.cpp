#include <iostream>
#include <vector>
using namespace std;
vector<int> v;
vector<int> result;
int k;
void Solve(int d){
	if(result.size()==6){
		for(int i=0;i<6;i++){
			cout<<result[i]<<" ";
		}
		cout<<"\n";
		return;
	}
	for(int i=d;i<k;i++){
		result.push_back(v[i]);
		Solve(i+1);
		result.pop_back();
	}
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	while(1){
		cin>>k;
		if(k==0) break;
		
		for(int i=0;i<k;i++){
			int index;	cin>>index;
			v.push_back(index);
		}
		Solve(0);
		cout<<"\n";
		while(v.size()!=0) v.pop_back();
		while(result.size()!=0) result.pop_back();
	}
	
	return 0;
}
