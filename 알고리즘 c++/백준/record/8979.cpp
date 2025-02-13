#include <iostream>
#include <vector>
using namespace std;
vector<int> v[1001];
int main(){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,k; cin>>n>>k;
	for(int i=0;i<n;i++){
		int index,index1,index2,index3; cin>>index>>index1>>index2>>index3;
		v[index].push_back(index1);
		v[index].push_back(index2);
		v[index].push_back(index3);
	}
	
	int target1=v[k][0];
	int target2=v[k][1];
	int target3=v[k][2];
	int sum=1;
	for(int i=1;i<=n;i++){
		if(i==k) continue;
		int index1=v[i][0];
		int index2=v[i][1];
		int index3=v[i][2];
		if(target1<index1){
			sum++;
		}else if(target1==index1){
			if(target2<index2){
				sum++;
			}else if(target2==index2){
				if(target3<index3){
					sum++;
				}
			}
		}
	}
	cout<<sum;
	
	return 0;
}
