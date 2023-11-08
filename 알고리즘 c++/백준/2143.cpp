#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
long long t,n,m,result=0;
vector<int> v_n;
vector<int> v_m;
vector<int> sumsum;
void Solve_A(){
	
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<n;j++){
			sum+=v_n[j];
			sumsum.push_back(sum);
		}
	}
	sort(sumsum.begin(),sumsum.end());
	
	return;
}
void Solve_B(){
	
	for(int i=0;i<m;i++){
		int sum=0;
		for(int j=i;j<m;j++){
			sum+=v_m[j];
			int iindex=t-sum;
			long long low=lower_bound(sumsum.begin(),sumsum.end(),iindex)-sumsum.begin();
			long long up=upper_bound(sumsum.begin(),sumsum.end(),iindex)-sumsum.begin();
			result+=up-low;
		}
	}
	
	return;
}
void Solve(){
	Solve_A();
	Solve_B();
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>t>>n;
	for(int i=0;i<n;i++){
		int index;	cin>>index;
		v_n.push_back(index);
	}
	cin>>m;
	for(int i=0;i<m;i++){
		int index;	cin>>index;
		v_m.push_back(index);
	}
	Solve();
	cout<<result;
	
	return 0;
}
