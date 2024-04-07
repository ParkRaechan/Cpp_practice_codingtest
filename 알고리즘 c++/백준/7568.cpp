#include <iostream>
#include <vector>
using namespace std;
vector<pair<int,int>> v;
int main(int argc,const char *argv[]){
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	int n; cin>>n;
	for(int i=0;i<n;i++){
		int index_1,index_2;cin>>index_1>>index_2;
		v.push_back({index_1,index_2});
	}
	for(int i=0;i<n;i++){
		int count=1;
		for(int j=0;j<n;j++){
			if(v[i].first<v[j].first&&v[i].second<v[j].second){
				count++;
			}
		}
		cout<<count<<" ";
	}
	
	return 0;
}
