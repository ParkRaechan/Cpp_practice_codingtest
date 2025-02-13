#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
typedef long long ll;
vector<int> v1;
vector<int>	v2;
bool compare(int a,int b){
    return a>b;
}
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n,index;	cin>>n;
	if(n==1){
		cin>>index;	cout<<index;
		return 0;
	}
	int index1=0,index2=0;	bool zeroo=false;
	for(int i=0;i<n;i++){
		cin>>index;
		if(index==0) zeroo=true;
		else if(index>0){
			index1++;
			v1.push_back(index);
		}
		else if(index<0){
			index2++;
			v2.push_back(index);
		}
	}
	sort(v1.begin(),v1.end());
	sort(v2.begin(),v2.end(),compare);
	ll sum=0;
	for(int i=index1-1;i>=0;i--){
		if(i==0){
			sum+=v1[i];
			break;
		}
		if(v1[i-1]==1||v1[i]==1){
			sum+=v1[i];	sum+=v1[i-1];
		}
		else{
			ll index1_1;
			index1_1=v1[i]*v1[i-1];
			sum+=index1_1;
		}
		i--;
	}
	for(int i=index2-1;i>=0;i--){
		if(index2%2==1&&i==0){
			if(zeroo==true) break;
			else{
				sum+=v2[i];
				break;
			}
		}
		ll index2_1;
		index2_1=v2[i]*v2[i-1];
		i--;
		sum+=index2_1;
	}
	cout<<sum;
	
	return 0;
}
