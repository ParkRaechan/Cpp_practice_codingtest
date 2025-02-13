#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;
vector<double> v;
vector<pair<int,int>> v1;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	double n,m;	cin>>n;	m=n;
	double sum=0;
	while(m--){
		double index;	cin>>index;
		v.push_back(index);
		sum+=index;
	}
	int a=(int)floor(sum/n+0.5);
	sort(v.begin(),v.end());
	int b=(int)v[n/2];
	
	int M=0,f=1,c=0,g=0;
	v[n]=5000;
	for(int i=1;i<=n;i++){
		if(v[i]==v[i-1]){
			f++;
			
		}else{
			if(f>=M){
				M=f;
				v1.push_back({f,(int)v[i-1]});
				g++;
			}
			f=1;
		}
	}
	
	if(g==1){
		c=v1[0].second;
	}else{
		for(int i=1;i<g;i++){
			if(v1[i].first==M){
				if(v1[i].first==v1[i-1].first){
					c=v1[i].second;	break;
				}else{
					c=v1[i].second;
				}
			}
		}
	}
	
	int d=v[n-1]-v[0];
	cout<<a<<"\n"<<b<<"\n"<<c<<"\n"<<d;
	
	return 0;
}
