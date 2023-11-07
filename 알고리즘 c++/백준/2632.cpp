#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int w,n,m,result=0;
vector<int> v_a;
vector<int> v_b;
vector<int> sum1;
vector<int> sum2;
void Solve_a(){
	sum1.push_back(0);
	for(int i=0;i<m;i++){
		int sum=0;
		for(int j=i;j<i+m-1;j++){
			sum+=v_a[j%m];
			sum1.push_back(sum);
		}
	}
	int sum=0;
	for(int i=0;i<m;i++){
		sum+=v_a[i];
	}
	sum1.push_back(sum);
	
	return;
}
void Solve_b(){
	sum2.push_back(0);
	for(int i=0;i<n;i++){
		int sum=0;
		for(int j=i;j<i+n-1;j++){
			sum+=v_b[j%n];
			sum2.push_back(sum);
		}
	}
	int sum=0;
	for(int i=0;i<n;i++){
		sum+=v_b[i];
	}
	sum2.push_back(sum);
	
	return;
}
void Solve(){
	Solve_a();
	Solve_b();
	sort(sum1.begin(),sum1.end());
	sort(sum2.begin(),sum2.end());
	for(int i=0;i<sum1.size();i++){
		int index=w-sum1[i];
		if(index<0) break;
		int low=lower_bound(sum2.begin(),sum2.end(),index)-sum2.begin();
		int up=upper_bound(sum2.begin(),sum2.end(),index)-sum2.begin();
		result+=up-low;
	}
	return;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	cin>>w>>m>>n;
	for(int i=0;i<m;i++){
		int a;	cin>>a;
		v_a.push_back(a);
	}
	for(int i=0;i<n;i++){
		int b;	cin>>b;
		v_b.push_back(b);
	}
	Solve();
	cout<<result;
	
	return 0;
}
